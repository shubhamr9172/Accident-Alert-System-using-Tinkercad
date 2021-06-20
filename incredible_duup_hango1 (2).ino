const int trigPin = 7;
const int echoPin = 4;
int buzz = 10;
long duration;
int distance;

void setup(){
  pinMode(trigPin, OUTPUT);
  
  pinMode(echoPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  
  if(distance <= 50 && distance >=20)
  {
    digitalWrite(13, HIGH);
    
  }
  
  
  else
  {
    digitalWrite(13, LOW);
  }
  
  if(distance <= 20)
  {
    digitalWrite(2, HIGH);
    
    tone(buzz, 2000);
    delay(100);
    noTone(buzz);
    delay(100);
    
    tone(buzz, 2000);
    delay(100);
    noTone(buzz);
    delay(100);
    
    tone(buzz, 2000);
    delay(100);
    noTone(buzz);
    
    tone(buzz, 2000);
    delay(100);
    noTone(buzz);
    delay(100);
  }
  
  else
  {
    digitalWrite(2, LOW);
  }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  