
const int piezoPin1 = 2; 
int sensorValue= 0;
int score=0; 
//int led= 

const int threshold = 100;

void setup() {
  
  Serial.begin(9600);

  pinMode(piezoPin1, INPUT);
//  pinMode(ledPin, OUTPUT); 
}

void loop() {
  
  sensorValue = analogRead(piezoPin1);

  if (sensorValue > threshold) {
    score++;

    Serial.println("One point added"); 
    //digitalWrite(led, HIGH); 
  }
  /*else {
   digitalWrite(led, LOW);
  } 
  */
  delay(100);
}
