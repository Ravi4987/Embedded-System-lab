#include <NTPClient.h>
#include <EEPROM.h>

#include <PubSubClient.h>
#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#include <FS.h>

#define eeprom_ftotal_loc  500
#define FORMAT_SPIFFS_IF_FAILED true


typedef struct  __attribute__ ((__packed__))
{
    char Device_id[25];
    unsigned long int timeStamp;
    char dataType[2];
    float tempreture;
    float battery_perc;
    unsigned int count;
    bool IO1;
    bool IO2;
}Payload_t;

String Device_Str = "01234";

bool send_payload(Payload_t *pData);
String addJSON(String key, String value, bool isString);

void setup() {
  Payload_t sTempPayloadData;
  Payload_t sPayloadData;
   byte *src,*dest;
  EEPROM.begin(512);
  Serial.begin(115200);


  Device_Str.toCharArray(sPayloadData.Device_id, 25); 
  sPayloadData.timeStamp =  230822;
  sPayloadData.dataType[0] = 'L';
  sPayloadData.dataType[1] = 'D';
  sPayloadData.tempreture = 25.9;
  sPayloadData.battery_perc = 50;
  sPayloadData.count  = 23;
  sPayloadData.IO1    = false;
  sPayloadData.IO2    = false; 


   src = (byte *)&(sPayloadData.Device_id[0]);
  dest = (byte *)&(sTempPayloadData.Device_id[0]);

  for(unsigned short int count;count<sizeof(Payload_t);count++)
  {
    *dest++  = *src++;
  }

  Serial.printf("Devid:%s\r\n",String(sTempPayloadData.Device_id));
  Serial.printf("Time Stamp:%u\r\n",sTempPayloadData.timeStamp);
  Serial.printf("Data Type[0]:%c\r\n",sTempPayloadData.dataType[0]);
  Serial.printf("Data Type[1]:%c\r\n",sTempPayloadData.dataType[1]);
  Serial.printf("Tempreture:%f\r\n",sTempPayloadData.tempreture);
  Serial.printf("Battery Per:%f\r\n",sTempPayloadData.battery_perc);
  Serial.printf("Packet Count:%u\r\n",sTempPayloadData.count);
  Serial.printf("IO1:%u\r\n",sTempPayloadData.IO1);
  Serial.printf("IO2:%u\r\n",sTempPayloadData.IO2);

  send_payload(&sTempPayloadData);
}

void loop() {
  // put your main code here, to run repeatedly:

}

bool send_payload(Payload_t *pData)
{
  bool return_val = false;
  unsigned int retry = 3;
  String data = "{";
  data += addJSON("deviceId", String(pData->Device_id), true);
  data += "," + addJSON("dataType", String(pData->dataType), true);
  data += "," + addJSON("timeStamp", String(pData->timeStamp), false);
  data += "," + addJSON("iO1", String(pData->IO1), false);
  data += "," + addJSON("iO2", String(pData->IO2), false);
  data += "," + addJSON("temperature", String(pData->tempreture,3), false);
  data += "," + addJSON("battery", String(pData->battery_perc), false);
  data += "," + addJSON("count", String(pData->count), false);
  data += "}";

  Serial.print("Send Payload:");
  Serial.println(data);
}

String addJSON(String key, String value, bool isString){
  String result = "";
  if(isString == true){
    result += "\"" + key + "\": " + "\"" + value + "\"";
  }
  else{
    result += "\"" + key + "\":" + value;
  }
  return result;
}
