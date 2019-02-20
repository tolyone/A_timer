int h, m, s, i = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("h m s");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  ++i;
  h = int(i/3600);
  m = int(i/60) - h*60;
  s = i - m*60 - h*3600;
  Serial.print(h);
  Serial.print(":");
  Serial.print(m);
  Serial.print(":");
  Serial.println(s);
}
