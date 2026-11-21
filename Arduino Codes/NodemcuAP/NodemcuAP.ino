#include <ESP8266WiFi.h>
#include <WiFiClient.h> 
#include <ESP8266WebServer.h>


ESP8266WebServer server(80);

void handleRoot()
{

  String web= "<html><h1>WiFi Settings</h1>";
         web+= "<form action=\"setap\" method=\"get\">";
         web+= "SSID:<br><input type=\"text\" name=\"ssid\"><br>";
         web+= "Password:<br><input type=\"password\" name=\"password\"><br><br>";
         web+= "<input type=\"submit\" text=\"Submit\"> ";
  server.send(200, "text/html", web);

  server.on("/setap",[](){
    
  Serial.print("SSID:");
  Serial.println(server.arg("ssid"));
  Serial.print("Password:");
  Serial.print(server.arg("password"));  
    
    
    }
  
  );


}


void setup() {
  
  WiFi.mode(WIFI_AP);
  WiFi.softAP("Esp8266", "ABCD1234");
  
   server.on("/", handleRoot);
   server.begin();
   Serial.begin(115200);

}

void loop() {
  server.handleClient();
}
