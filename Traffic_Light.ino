int r = 10;
int y = 9;
int g = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  process();
  delay(2000);

}
void process() {
  digitalWrite(r,HIGH);
  digitalWrite(y,LOW);
  digitalWrite(g,LOW);
  delay(2000);

  digitalWrite(r,LOW);
  digitalWrite(y,HIGH);
  digitalWrite(g,LOW);
  delay(1000);

  digitalWrite(r,LOW);
  digitalWrite(y,LOW);
  digitalWrite(g,HIGH);
  delay(1000);

  digitalWrite(r,LOW);
  digitalWrite(y,HIGH);
  digitalWrite(g,LOW);
  
}
