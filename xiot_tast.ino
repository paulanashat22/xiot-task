/*
dear Sir ,
this code is made by paula nashat rady. and the output of this code is the 3 Temperature sensors will give you
their datas if the pushbutton is not pressed if the push button is pressed the sensors will stop sending data
and the arduino will tell you the state of led if it is ON or OFF.the 3 sensors will back and send you data 
when you stop pressing at the push button
*/

#define buttonPin  2     
#define ledPin  12      
volatile int count = 0; 

void setup() {
 Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(0, pin_ISR, FALLING);
}

void loop() {
  int x= analogRead(0);
  int y= analogRead(1);
  int z= analogRead(2);
  Serial.print("Sensor1 =");
  Serial.print(x);
  Serial.print(" Sensor2 =");
  Serial.print(y);
  Serial.print(" Sensor3 =");
  Serial.println(z);
    digitalWrite(ledPin,0);}

void pin_ISR() {

while(digitalRead(2)==0)

{
  if(count==1){
 Serial.print("pressed");
 Serial.println("ON");
Serial.println(" ");
count=2;
 }
 else if(count<1) {count++; }
  digitalWrite(ledPin,1);
  }  count=0;

 Serial.println("OFF");

 
}
