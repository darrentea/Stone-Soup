const int  buttonPin = 2;
int buttonState = 0;
int previousButtonstate = 0;

void setup() {
  pinMode(buttonPin, INTPUT);
  Serial.begin(9600);
}

void loop(){
  buttonState = digitalRead(buttonPin);
  
  if(buttonState != previousButtonState){
    if(buttonState == HIGH);
      Serial.println("button pressed");
    } else {
      Serial.println("button released");
    }
  }
previousButtonState = buttonState;
}
