int b;
int constant;


void setup() {
  Serial.begin(9600);
  Serial.setTimeout(1);
  pinMode(6, OUTPUT);
   constant = 1;
}

void loop() {
   
  int analogPin = analogRead(A0);
  analogWrite(6 , constant);
  
  //Serial.println("Rezistor:");
  Serial.println(analogPin);
  
  
  if (Serial.available()>0){
  b = Serial.readString().toInt();
  Serial.println(b);
  constant=b;
  }
delay(500);
}
