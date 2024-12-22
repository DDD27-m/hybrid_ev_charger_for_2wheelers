const int relay1Pin=7;
const int relay2Pin=8;
const int ldrPin=A0;
int lightThreshold=500;
void setup() {  
  pinMode(relay1Pin,OUTPUT);
  pinMode(relay2Pin,OUTPUT);
  digitalWrite(relay1Pin,HIGH);
  digitalWrite(relay2Pin,HIGH);
  Serial.begin(9600);
}
void loop(){
  int lightLevel1 = analogRead(ldrPin);
  Serial.print("LDR1:");
  Serial.print(lightLevel1);
  if(lightLevel1<lightThreshold) {
    digitalWrite(relay1Pin,LOW);
  }else{
    digitalWrite(relay1Pin,HIGH);
  }
  if(lightLevel1<lightThreshold) {
    digitalWrite(relay2Pin,LOW);
  }else{
    digitalWrite(relay2Pin,HIGH);
  }
  delay(500);
}
