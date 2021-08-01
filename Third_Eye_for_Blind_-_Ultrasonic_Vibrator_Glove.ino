  const int TrigPin = 12; //Trigger connected to PIN 7   
  const int EchoPin = 10; //Echo connected to PIN 8   
  int buz=5; //Buzzer to PIN 4   
  void setup() {   
  Serial.begin(9600);   
  pinMode(buz, OUTPUT);   
  }   
  void loop()   
  {   
  long duration, cm;   
  pinMode(TrigPin, OUTPUT);   
  digitalWrite(TrigPin, LOW);   
  delayMicroseconds(2);   
  digitalWrite(TrigPin, HIGH);   
  delayMicroseconds(5);   
  digitalWrite(TrigPin, LOW);   
  pinMode(EchoPin, INPUT);   
  duration = pulseIn(EchoPin, HIGH);   
  cm = microsecondsToCentimeters(duration);   
  if(cm<=60 && cm>0)   
  {   
  int d= map(cm, 5, 200, 100, 2000);   
  digitalWrite(buz, HIGH);   
  delay(150);   
  digitalWrite(buz, LOW);   
  delay(d);  
  }   
  Serial.print(cm);    
  Serial.print("cm");   
  Serial.println();   
  delay(150);   
  }   
  long microsecondsToCentimeters(long microseconds)   
  {   
  return microseconds / 29 / 2;   
  } 
