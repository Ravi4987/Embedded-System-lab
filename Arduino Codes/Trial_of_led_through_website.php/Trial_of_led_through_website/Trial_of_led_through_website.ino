#include <ESP8266WiFi.h>

const char* ssid     = "Redmi";  
const char* password = "ABCD1234";

const char* host     = "192.168.43.136"; // Your domain, no slashes (ex: www.nyl.io)  
String path          = "/light.php?"; // path to light.json beginning with slash (ex: /esptest/light.json)  
const int led        = 2;


void setup() {
pinMode(led, OUTPUT); 
  Serial.begin(115200);

  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi connected");  
  Serial.println("IP address: " + WiFi.localIP());
}



void loop() {
  Serial.print("connecting to ");
  Serial.println(host);
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }

  client.print(String("GET ") + path + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: keep-alive\r\n\r\n");

  delay(500); // wait for server to respond

  // read response
  int dir = 0; 
  while(client.available()){
    String line = client.readStringUntil('\r');
    Serial.print(line);

   if (line.indexOf("light=on") >0)
    digitalWrite(led,1);
  else if (line.indexOf("light=off")>0)
    digitalWrite(led,0);

    if (digitalRead(led))
         { 
           client.print("<td>Light  is ON</td>");
        
         }
          else
          {
            client.print("<td>Light  is OFF</td>");
      
        }
    
      }
  Serial.print("closing connection. ");
}


