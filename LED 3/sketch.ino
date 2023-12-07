#define LED1  9
#define LED2 13
#define LED3 12
#define LED4 14

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  delay(1000); // this speeds up the simulation
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  delay(1000);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
  delay(1000);
  digitalWrite(LED4, HIGH);
  delay(1000);
  digitalWrite(LED4, LOW);
  delay(1000);
}
