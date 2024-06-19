#define vpin 3
#define vpin2 4
#define lpin 13

int x;
int y;
int i=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lpin, OUTPUT);
  pinMode(vpin, INPUT);
  pinMode(vpin2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  x=digitalRead(vpin);
  y=digitalRead(vpin2);
  if(x==1 || y==1){
    digitalWrite(lpin, HIGH);
    delay(100);
    i++;
    Serial.println(i);
    
    

  }else if(x==0 && y==0){
    digitalWrite(lpin, LOW);
  }

}