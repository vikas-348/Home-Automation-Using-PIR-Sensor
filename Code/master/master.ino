const int out=13;
int value=0;
void setup(){
  Serial.begin(9600);
  pinMode(out,INPUT);
}
void loop(){
  int val=digitalRead(out);
 
delay(100);
    if(val == 1 && value == 0)

{

Serial.println("A");
value = 1;
delay(10000);

}

else if(val == 0 && value == 1)

{

Serial.println("a");
value = 0;
delay(0);

}

//delay(200);
}
