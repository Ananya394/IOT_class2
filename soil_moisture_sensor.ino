const int sensorPin = A0;  
const int ledPin1 = 6;
const int ledPin2 = 9;
const int ledPin3 = 12;  
int sensorValue = 0;     

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);  
  Serial.begin(9600);        
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue >= 0 && sensorValue <= 400) {  
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);  
    digitalWrite(ledPin3, LOW);  
  } 
  else if (sensorValue >= 401 && sensorValue <= 700) {  
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);  
    digitalWrite(ledPin3, LOW);  
  } 
  else {  
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin2, LOW);  
    digitalWrite(ledPin1, LOW);  
  }

  delay(1000);  
}
