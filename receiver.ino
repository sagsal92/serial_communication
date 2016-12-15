#include <SoftwareSerial.h>

SoftwareSerial mySerial(2,3); // RX, TX
char ch;
unsigned long int stepsint;
void setup() 
{
  Serial.begin(9600);
  
  stepsint=0;

  Serial.println("client ok! send no!");

  mySerial.begin(9600);
  
}
void loop() 
{ 

 if (mySerial.available()>0) 
 {
    ch=mySerial.read();
	
    switch(ch)
   {
   case 'z':
    {
         
          Serial.println(stepsint);
		  
          stepsint=0;
		  
		  break;
    }
    case '0':
    {
        stepsint=(stepsint*10);           break;
    }
    case '1':
    {
        stepsint=(stepsint*10)+1;        break;
    }
   case '2':
    {
        stepsint=(stepsint*10)+2;        break;
    }
   case '3':
    {
        stepsint=(stepsint*10)+3;        break;
    }
    case '4':
    {
        stepsint=(stepsint*10)+4;          break;
    }
    case '5':
    {
        stepsint=(stepsint*10)+5;        break;
    }
    case '6':
    {
        stepsint=(stepsint*10)+6;        break;
    }
    case '7':
    {
        stepsint=(stepsint*10)+7;        break;
    }
    case '8':
    {
        stepsint=(stepsint*10)+8;        break;
    }
   case '9':
    {
        stepsint=(stepsint*10)+9;        break;
    }
   }
  }
 }
 

