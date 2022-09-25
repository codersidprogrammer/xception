String incomingByte = ""; // for incoming serial data

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.readString();

    if(incomingByte == "Y") {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    
    if(incomingByte == "N") {
      digitalWrite(LED_BUILTIN, LOW);
    }
    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte);
  }
  delay(500);
}

//
//
//

int index = 0; 

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {

  for(index; index <= 10; index++) {
    Serial.println(index);
    delay(1000);
  }
  
}


//
//
//

int index = 0; 

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {

  for(index; index <= 10; index++) {
    if(index < 3) {
      Serial.println("C");
    } else if(index <= 7 && index > 3) {
      Serial.println("B");
    } else if(index <= 10 && index > 7) {
      Serial.println("A")
    }
  }
  
}