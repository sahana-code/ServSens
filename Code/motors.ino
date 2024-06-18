// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;
// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;
int speed; /


void setup() {
	// Set all the motor control pins to outputs
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	
	// Turn off motors - Initial state
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);

  Serial.begin(9600);
  Serial.println("Enter a speed:")
}

void loop() {
	
	speedControl();
	delay(1000);
  /*if (Serial.available() > 0) {
 String inputString = Serial.readStringUntil('\n');
    
    // Convert the string to an integer
    userInput = inputString.toInt();


  }
  */
}


// This function lets you control speed of the motors
void speedControl() {
	// Turn on motors
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	
	analogWrite(enA, 100); //userInput
	analogWrite(enB, 100); //userInput 

	}
	

