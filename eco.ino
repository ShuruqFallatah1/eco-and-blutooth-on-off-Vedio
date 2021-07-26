


int treg = 12;
int sig = 11;
float d;
int pingTravelTime;


void setup() {
Serial.begin(9600);

pinMode(treg,OUTPUT);
pinMode(sig,INPUT);
digitalWrite(treg,LOW);
}

void loop() {
digitalWrite(treg,HIGH);
delayMicroseconds(20);
digitalWrite(treg,LOW);
pingTravelTime= pulseIn(sig,HIGH);
d= 0.0001*((float)pingTravelTime*340.0)/2.0;

Serial.print("*D: "+String(d,1)+"*");
  if (d>=10)Serial.println("    Vedio off");
  delay(3000);
  if (d<=10)Serial.println("   vedio on");
  
  delay(100);
}
