// Traffic Light Simulator
// Cycles: Red -> Red+Yellow -> Green -> Yellow -> Red

int redPin = 2;
int yellowPin = 3;
int greenPin = 4;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Traffic light simulator starting...");
}

void allOff() {
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
}

void loop() {
  allOff();
  digitalWrite(redPin, HIGH);
  Serial.println("RED - Stop");
  delay(3000);

  digitalWrite(yellowPin, HIGH);
  Serial.println("RED + YELLOW - Get ready");
  delay(1000);

  allOff();
  digitalWrite(greenPin, HIGH);
  Serial.println("GREEN - Go");
  delay(3000);

  allOff();
  digitalWrite(yellowPin, HIGH);
  Serial.println("YELLOW - Slow down");
  delay(1000);
}