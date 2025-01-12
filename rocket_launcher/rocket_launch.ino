
// Pin connected to push-button
int led1 = 0;
int button = 1;
int relay = 2;
// Variable to check the state
int buttonState;

void setup()
{
  // Defining the button pin as input
  pinMode(button, INPUT);
  // Defines the LED1 as output
  pinMode(led1, OUTPUT);
  // Defines the LED2 as output
  pinMode(relay, OUTPUT);
  digitalWrite(relay, HIGH);
}

void loop() 
{
  // Checks if the button state has change
  buttonState = digitalRead(button);
  if (buttonState == HIGH) 
  {
    // Turns the LED1 on    
    digitalWrite(led1, HIGH);  
    delay(10000);
    
    int n;
    for (n = 1; n <= 5; n++)
      {
        digitalWrite(led1, LOW);
        delay(500);
        digitalWrite(led1, HIGH);
        delay(500);
      }  
      
    digitalWrite(led1, LOW);
    delay(1000);
    // Turns the LED2 on
    digitalWrite(relay, LOW);
  } 
}
