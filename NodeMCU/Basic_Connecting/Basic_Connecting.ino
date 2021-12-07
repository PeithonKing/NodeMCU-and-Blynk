#include <ESP8266WiFi.h>

String ID = "Aritra";
String pwd = "aritra@1";

//String ID = "PeithonKing";
//String pwd = "ImHero#1";

/*
 * Connected = 3
 * Connecting = 7
 * Connection Error = 1
*/

void setup()
{
    // put your setup code here, to run once:
    WiFi.begin(ID, pwd);
    Serial.begin(115200);
    while (WiFi.status() == 7)
    {
        Serial.print(".");
        delay(200);
    }
    if (WiFi.status() == 3)
    {
        Serial.println();
        Serial.print("Connected to ");
        Serial.println(ID);
        Serial.print("My IP is ");
        Serial.println(WiFi.localIP());
    }
    if (WiFi.status() == 1)
    {
        Serial.println("\nConnection Failed!");
    }
}

void loop()
{
    // put your main code here, to run repeatedly:
}
