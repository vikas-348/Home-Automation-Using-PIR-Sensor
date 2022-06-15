//char Incoming_value = 0;                //Variable for storing Incoming_value
#define led 13
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(led, OUTPUT);        //Sets digital pin 13 as output pin
}
void loop()

{

// put your main code here, to run repeatedly:

if(Serial.available())

{

char val = Serial.read();
if(val == 'A')

{

digitalWrite(led, HIGH);

}

else if(val == 'a')

{

digitalWrite(led, LOW);

}

}

}    
