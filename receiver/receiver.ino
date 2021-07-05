//receiver
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

//create an RF24 object
RF24 radio(9, 8);  // CE, CSN

//address through which two modules communicate.
const byte address[6] = "00001";

void setup()
{
  Serial.begin(9600);
  radio.begin(); 
  
  //set the address
  radio.openReadingPipe(0, address); 
  /* 1st arg is number of stream
  we can create 6 stream that respond to different addresses
  we created only stream number 0
  
  The second argument is the address to which 
  the stream will react to collect the data.
*/  

  //Set module as receiver
  radio.startListening();
}

void loop()
{ 
  
    char text[32] = {0};
  //Read the data if available in buffer 
  if (radio.available())
  {
    radio.read(&text, sizeof(text));
    Serial.println(text);
  }
}
