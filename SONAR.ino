int trigPin = 12;
int echoPin = 10;
int buzzerPin = 8;
int soundSpeed = 330;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,HIGH);
  delay(700);
  digitalWrite(trigPin,LOW);
  delay(700);
  float duration = pulseIn(echoPin,HIGH);
  float distance = (soundSpeed*duration)/2;
  if(distance<=50){
    tone(buzzerPin,1000);
    delay(2000);
    noTone(buzzerPin);
    delay(1000);
  }
  Serial.print("Distance is :");
  Serial.println(distance);
}
