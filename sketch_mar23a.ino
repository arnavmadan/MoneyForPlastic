

void setup() {
  Serial.begin(9600);
  pinMode (8,OUTPUT);
  pinMode (12,OUTPUT);
  pinMode (13,INPUT);
  // put your setup code here, to run once:

}

void loop() {
long duration,distance;
digitalWrite(12,HIGH);
delayMicroseconds(1000);
digitalWrite(12,LOW);
duration = pulseIn(13,HIGH);
distance = (duration/2)/29.1;
Serial.println(distance);
Serial.println("CM");
delay(10);
 if ((distance<50)) {
    digitalWrite(8,LOW);
  } else if((distance>=50)) {
    digitalWrite(8,HIGH);
  }

}
