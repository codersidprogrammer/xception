
String nama = "Mochamad Dimas Editiya";
int usia = 28;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Nama: ");
  Serial.println(nama);
  Serial.print("Usia: ");
  Serial.println(usia);
  delay(2000);
}

// 
// 
// 

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
}

// 
// 
// 

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print("LED :");
  Serial.println(LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("LED :");
  Serial.println(HIGH);
  delay(1000);
}