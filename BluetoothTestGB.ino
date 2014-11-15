#include <SoftwareSerial.h>


SoftwareSerial nss(2, 3); // (RX, TX)

void setup()
{
  
  // set up the LCD's number of columns and rows: 
//lcd.begin(16, 2);
Serial.begin(57600);
  // serial port communications from Arduino to Bluetooth Firefly module (BlueSMiRF Gold)
  // BlueSMiRF Gold defaults to 115.2k BAUD.  Change to 57.6k BAUD.
  // Don't ever use low BAUD like 4800 and 9600.  
  nss.begin(9600);

}
void loop()
{
  //*************receiving a message from Android and printing on Arduino************************* 
  if (nss.available()) 
   {
     //lcd.print(nss.read(), BYTE); //get message from Android device on the Arduino NewSoftSerial serial port and print it out on the LCD
     Serial.println(char(nss.read())); //get message from Android device on the Arduino NewSoftSerial serial port and print it out on the LCD
     nss.println("Hello, arduino speak");
   }

    }

