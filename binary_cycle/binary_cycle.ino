
int close_a0 = 21;
int close_a1 = 20;
int close_a2 = 19;
int far_a0 = 2;
int far_a1 = 3;
int far_a2 = 4;
int sanity = 8;
 
void setup() {
 
  // pinMode(activate, OUTPUT);
  pinMode(close_a0, OUTPUT);
  pinMode(close_a1, OUTPUT);
  pinMode(close_a2, OUTPUT);
  pinMode(far_a0, OUTPUT);
  pinMode(far_a1, OUTPUT);
  pinMode(far_a2, OUTPUT);
  pinMode(sanity, OUTPUT);
  digitalWrite(sanity, HIGH);
  // digitalWrite(activate, HIGH);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  // for (int count = 0; count <= 7; count++) {
  //   digitalWrite(close_a0, (count & 0x01) ? HIGH : LOW);
  //   digitalWrite(close_a1, (count & 0x02) ? HIGH : LOW);
  //   digitalWrite(close_a2, (count & 0x04) ? HIGH : LOW);
  //   delay(1500);
  // }

  for (int count = 0; count <= 7; count++) {
    digitalWrite(far_a0, (count & 0x01) ? HIGH : LOW);
    digitalWrite(far_a1, (count & 0x02) ? HIGH : LOW);
    digitalWrite(far_a2, (count & 0x04) ? HIGH : LOW);
    delay(1500);
  }

}