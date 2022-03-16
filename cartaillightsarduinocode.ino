int redLED = 13;
int yellowLED = 12;
int greenLED = 11;
int blueLED = 10;

void setup() 
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  
}


void loop() 
{
  delay(1000);
  digitalWrite(redLED, HIGH); 
  delay(1000);
  digitalWrite(yellowLED, HIGH); 
  delay(1000); 
  digitalWrite(greenLED, HIGH); 
  delay(1000); 
  digitalWrite(blueLED, HIGH); 
  delay(1000);   
  digitalWrite(redLED, LOW); 
  digitalWrite(yellowLED, LOW);  
  digitalWrite(greenLED, LOW); 
  digitalWrite(blueLED, LOW);                   
                  
}
