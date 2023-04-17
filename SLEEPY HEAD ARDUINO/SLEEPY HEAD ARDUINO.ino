// Starting of Program
int IN1a = 8;
int IN2a = 7;
int IN3b = 5;
int IN4b = 4;
char val;

void setup() 
{  
pinMode(IN1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(IN2a, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(IN3b, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(IN4b, OUTPUT);  // Digital pin 13 set as output Pin
Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }

  if( val == 'F') // Forward
    {
    digitalWrite(IN1a, HIGH);
    digitalWrite(IN2a, LOW);
    digitalWrite(IN3b, LOW);
    digitalWrite(IN4b, HIGH); 
    }
  else if(val == 'B') // Backward
    {
      digitalWrite(IN1a, LOW);
      digitalWrite(IN2a, HIGH);
      digitalWrite(IN3b, HIGH);
      digitalWrite(IN4b, LOW); 
    }
  
    else if(val == 'L') //Left
    {
    digitalWrite(IN1a, HIGH);
    digitalWrite(IN2a, LOW);
    digitalWrite(IN3b, HIGH);
    digitalWrite(IN4b, LOW);
    }
    else if(val == 'R') //Right
    {
    digitalWrite(IN1a, LOW);
    digitalWrite(IN2a, HIGH);
    digitalWrite(IN3b, LOW);
    digitalWrite(IN4b, HIGH); 
    }
    
  else if(val == 'S') //Stop
    {
    digitalWrite(IN1a, LOW);
    digitalWrite(IN2a, LOW);
    digitalWrite(IN3b, LOW);
    digitalWrite(IN4b,LOW);
}
}