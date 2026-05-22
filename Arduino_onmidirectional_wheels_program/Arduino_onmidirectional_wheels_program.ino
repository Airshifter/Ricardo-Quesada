int I1 = 21;
int I2 = 19;
int I3 = 18;
int I4 = 5;
int I5 = 17;
int I6 = 16;
int I7 = 4;
int I8 = 0;

const int trigPin = 12;
const int echoPin = 14;

int enablemotor1 = 27;
int enablemotor2 = 26;
int enablemotor3 = 32;
int enablemotor4 = 25;

float duration, distance, d;

void setup() {
  pinMode(I1,OUTPUT);
  pinMode(I2, OUTPUT);
  pinMode(I3, OUTPUT);
  pinMode(I4, OUTPUT);
  pinMode(I5, OUTPUT);
  pinMode(I6, OUTPUT);
  pinMode(I7, OUTPUT);
  pinMode(I8, OUTPUT);

  pinMode(enablemotor1, OUTPUT);
  pinMode(enablemotor2, OUTPUT);
  pinMode(enablemotor3, OUTPUT);
  pinMode(enablemotor4, OUTPUT);

  digitalWrite(enablemotor1, HIGH);
  digitalWrite(enablemotor2, HIGH);
  digitalWrite(enablemotor3, HIGH);
  digitalWrite(enablemotor4, HIGH);

  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
  
float sensor(int trigPin, int echoPin){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  return  distance;
}

void forward(int time){
  digitalWrite(I1, HIGH);
  digitalWrite(I2, LOW);
  digitalWrite(I3, HIGH);
  digitalWrite(I4, LOW);

  digitalWrite(I5, HIGH);
  digitalWrite(I6, LOW);
  digitalWrite(I7, HIGH);
  digitalWrite(I8, LOW);
  delay(time);
  Serial.print("ricardo");
}
  
void backward(int time){
  digitalWrite(I1, LOW);
  digitalWrite(I2, HIGH);
  digitalWrite(I3, LOW);
  digitalWrite(I4, HIGH);

  digitalWrite(I5, LOW);
  digitalWrite(I6, HIGH);
  digitalWrite(I7, LOW);
  digitalWrite(I8, HIGH);
  delay(time);
}

void still(int time){
  digitalWrite(I1, HIGH);
  digitalWrite(I2, HIGH);
  digitalWrite(I3, HIGH);
  digitalWrite(I4, HIGH);

  digitalWrite(I5, HIGH);
  digitalWrite(I6, HIGH);
  digitalWrite(I7, HIGH);
  digitalWrite(I8, HIGH);
  delay(time);
}

void limp(int time){
  digitalWrite(I1, LOW);
  digitalWrite(I2, LOW);
  digitalWrite(I3, LOW);
  digitalWrite(I4, LOW);

  digitalWrite(I5, LOW);
  digitalWrite(I6, LOW);
  digitalWrite(I7, LOW);
  digitalWrite(I8, LOW);
  delay(time);
}

  void rotateright(int time){
  digitalWrite(I1, HIGH);
  digitalWrite(I2, LOW);
  digitalWrite(I3, LOW);
  digitalWrite(I4, HIGH);

  digitalWrite(I5, LOW);
  digitalWrite(I6, HIGH);
  digitalWrite(I7, HIGH);
  digitalWrite(I8, LOW);
  delay(time);
}

void rotateleft(int time){
  digitalWrite(I1, LOW);
  digitalWrite(I2, HIGH);
  digitalWrite(I3, HIGH);
  digitalWrite(I4, LOW);
  
  digitalWrite(I5, HIGH);
  digitalWrite(I6, LOW);
  digitalWrite(I7, LOW);
  digitalWrite(I8, HIGH);

  delay(time);
}

void right(int time){
  digitalWrite(I1, HIGH);
  digitalWrite(I2, LOW);
  digitalWrite(I3, LOW);
  digitalWrite(I4, HIGH);

  digitalWrite(I5, HIGH);
  digitalWrite(I6, LOW);
  digitalWrite(I7, LOW);
  digitalWrite(I8, HIGH);
  delay(time);
}
  
void left(int time){
  digitalWrite(I1, LOW);
  digitalWrite(I2, HIGH);
  digitalWrite(I3, HIGH);
  digitalWrite(I4, LOW);

  digitalWrite(I5, LOW);
  digitalWrite(I6, HIGH);
  digitalWrite(I7, HIGH);
  digitalWrite(I8, LOW);
  delay(time);
}

void upright(int time){
  delay(time);

}

void upleft(int time){
  delay(time);

}
 
void downright(int time){
  delay(time);

}

void downleft(int time){
  delay(time);

}
 
void loop() {
  d = sensor(trigPin, echoPin);
  Serial.print("Distance: ");
  Serial.println(d);
  delay(50);

if (d > 10){
  forward(1);
}
else {
  still(1);
  }
}





