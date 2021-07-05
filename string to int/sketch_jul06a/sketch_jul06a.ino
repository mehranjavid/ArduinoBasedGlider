void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() { 
  int num = 1234;
char cstr[16];
itoa(num, cstr, 10);
int val = atoi(cstr);
Serial.println(cstr);
val+=1;
delay(1000);
Serial.println(val);



}
