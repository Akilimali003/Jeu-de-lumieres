//Creation of variables
int const led_vert1 = 2;
int const led_vert2 = 3;
int const led_vert3 = 4;
int const led_jaune1 = 5;
int const led_jaune2 = 6;
int const led_rouge = 7;

void setup() {
  // Initialisation of variables
  pinMode(led_vert1, OUTPUT);
  pinMode(led_vert2, OUTPUT);
  pinMode(led_vert3, OUTPUT);
  pinMode(led_jaune1, OUTPUT);
  pinMode(led_jaune2, OUTPUT);
  pinMode(led_rouge, OUTPUT);
}

void loop() {
  // main code here, to run repeatedly
  digitalWrite(led_vert1, HIGH);
  delay(100);
  digitalWrite(led_vert2, HIGH);
  delay(100);
  digitalWrite(led_vert3, HIGH);
  delay(100);
  digitalWrite(led_jaune1, HIGH);
  delay(100);
  digitalWrite(led_jaune2, HIGH);
  delay(100);
  digitalWrite(led_rouge, HIGH);
  
  delay(100);
  
  digitalWrite(led_vert1, LOW);
  delay(100);
  digitalWrite(led_vert2, LOW);
  delay(100);
  digitalWrite(led_vert3, LOW);
  delay(100);
  digitalWrite(led_jaune1, LOW);
  delay(100);
  digitalWrite(led_jaune2, LOW);
  delay(100);
  digitalWrite(led_rouge, LOW);
  
  delay(100);
  
  digitalWrite(led_rouge, HIGH);
  delay(100);
  digitalWrite(led_jaune2, HIGH);
  delay(100);
  digitalWrite(led_jaune1, HIGH);
  delay(100);
  digitalWrite(led_vert3, HIGH);
  delay(100);
  digitalWrite(led_vert2, HIGH);
  delay(100);
  digitalWrite(led_vert1, HIGH);

  delay(100);
  
  digitalWrite(led_rouge, LOW);
  delay(100);
  digitalWrite(led_jaune2, LOW);
  delay(100);
  digitalWrite(led_jaune1, LOW);
  delay(100);
  digitalWrite(led_vert3, LOW);
  delay(100);
  digitalWrite(led_vert2, LOW);
  delay(100);
  digitalWrite(led_vert1, LOW);
  delay(100);
}
