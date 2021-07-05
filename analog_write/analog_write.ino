void setup() {
  // put your setup code here, to run once:
  pinMode(A0,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int i=800;
  analogWrite(A0,i); 
  delay(588);
}
