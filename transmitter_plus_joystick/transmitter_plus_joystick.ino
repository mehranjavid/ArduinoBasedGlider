//Include Libraries
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>


#define joyX A0
#define joyY A1
char stringXaxis[5] = {};
char stringYaxis[5] = {};

//create an RF24 object
RF24 radio(9, 8);  // CE, CSN

//address through which two modules communicate.
const byte address[6] = "00001";

void setup()
{
  Serial.begin(9600);
  radio.begin(); 
  
  //set the address
  radio.openWritingPipe(address);
  
  //Set module as transmitter
  radio.stopListening();

}
void loop()
{ 
  char text[5] = "Hello World";
  
   int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);
 
  //print the values with to plot or view 
  //Send message to receiver 
   
   //itoa(xValue, stringXaxis, 10); 
   //itoa(yValue, stringYaxis, 10);
   
  // Serial.println(stringYaxis); 
   
  radio.write(&text, sizeof(text));
  radio.write(&text, sizeof(text));
   
  delay(500);
}
