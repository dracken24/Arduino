int buttonPin = A0;     //Button and LED pin numbers
int ledGreen = 3;
int ledBlue = 4;
int ledYel = 5;
int ledRed = 6;
int ledWhite = 7;


void setup() 
{
    pinMode(ledGreen, OUTPUT);    //Define LED pins
    pinMode(ledRed, OUTPUT);
    pinMode(ledBlue, OUTPUT);
    pinMode(ledYel, OUTPUT);
    pinMode(ledWhite, OUTPUT);
    Serial.begin(9600);           //Serial monitor used to determine limit values
}

void loop() {
  int temp = analogRead(buttonPin);   //Read the analogue input
  Serial.println(temp);               //Display the read value in the Serial monitor
  if (temp > 100 && temp < 150)                //Second button limit
  {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledBlue, HIGH);
    digitalWrite(ledYel, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledWhite, HIGH);
  }
  else if (temp > 160 && temp < 220)                //Second button limit
  {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledBlue, HIGH);
    digitalWrite(ledYel, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledWhite, LOW);
  }
  else if (temp > 230 && temp < 330)                //Second button limit
  {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledBlue, HIGH);
    digitalWrite(ledYel, HIGH);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledWhite, LOW);
  }
  else if (temp > 400 && temp < 500)                //Third button limit
  {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledBlue, HIGH);
    digitalWrite(ledYel, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledWhite, LOW);
  }
  else if (temp > 850)                //Fourth button limit
  {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledBlue, LOW);
    digitalWrite(ledYel, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledWhite, LOW);
  }
  else                                //If none of the previous buttons are pressed, then the fifth button must be pressed
  {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(ledYel, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledWhite, LOW);
  }
  delay(100);                         //Delay for stability
}