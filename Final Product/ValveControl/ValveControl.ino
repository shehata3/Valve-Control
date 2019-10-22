int   Aa= A0;      // This section sets variables to the pins attached to the valves. It also makes a "paired" logic value that holds the state of the respective
bool  logic1 = false;   //pin whether it may be off or on

int   Ab = A1;
bool  logic2 = false;

int   Ac = A2;
bool  logic3 = false;

int   Ba = A3;
bool  logic4 = false;

int   Bb = A4;
bool  logic5 = false;

int   Bc = A5;
bool  logic6 = false;

int   Turbo = 2;
bool  logic7 = false;

int   Turbo4 = 5;
bool  logic8 = false;

int Rough = 7;
bool logic9 = false;

int Laser = 10;
bool logic10 = false;

void setup() {
  // all code in the setup function will only be run once, when the arduino is first switched on
  pinMode(Aa, OUTPUT);      // Here we initialize the pins by telling the arduino that they will all be used as output.
  pinMode(Ab, OUTPUT);
  pinMode(Ac, OUTPUT);
  pinMode(Ba, OUTPUT);
  pinMode(Bb, OUTPUT);
  pinMode(Bc, OUTPUT);
  pinMode(Turbo, OUTPUT);
  pinMode(Turbo4, OUTPUT);
  pinMode(Rough, OUTPUT);
  pinMode(Laser, OUTPUT);
  
  digitalWrite(Aa, LOW);    // Here we initialize each pin to start at 0V as to ensure all valves start in the OFF state
  digitalWrite(Ab, LOW);
  digitalWrite(Ac, LOW);
  digitalWrite(Ba, LOW);
  digitalWrite(Bb, LOW);
  digitalWrite(Bc, LOW);
  digitalWrite(Turbo, LOW);
  digitalWrite(Turbo4, LOW);
  digitalWrite(Rough, LOW);
  digitalWrite(Laser, LOW);
  
  Serial.begin(9600);           // This is the function to initialize serial communication with the computer, additional information on the importance of it can be
                                //found in the documentation.
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()){      // Here we check if the computer is communicationg with us through the computer

    char val = Serial.read();   // If it is, store the value coming from the computer in variable of type "char" with name "val"

    if (val == '1') {           // The following portion of the code checks which value was sent by the computer, in order to switch the state of the valve that corresponds
      if (logic1 == false) {    //with the button pressed on the GUI
        logic1 = true;
        digitalWrite(Aa, HIGH);
      }
      else {
        logic1 = false;
        digitalWrite(Aa, LOW);
      }
    }


    else if (val == '2') {    //How it works is when the respective value is pressed, it checks the state of the pin (note that the valve and pin are always in the same state).
      if (logic2 == false) {  // This state is then switched, and the new state of the pin/valve is saved in the respective "logic" boolean
        logic2 = true;
        digitalWrite(Ab, HIGH);
      }
      else {
        logic2 = false;
        digitalWrite(Ab, LOW);
      }
    }


     else if (val == '3') {
      if (logic3 == false) {
        logic3 = true;
        digitalWrite(Ac, HIGH);
      }
      else {
        logic3 = false;
        digitalWrite(Ac, LOW);
      }
    }


    else if (val == '4') {
      if (logic4 == false) {
        logic4 = true;
        digitalWrite(Ba, HIGH);
      }
      else {
        logic4 = false;
        digitalWrite(Ba, LOW);
      }
    }
    
    else if (val == '5') {
      if (logic5 == false) {
        logic5 = true;
        digitalWrite(Bb, HIGH);
      }
      else {
        logic5 = false;
        digitalWrite(Bb, LOW);
      }
    }
    
    else if (val == '6') {
      if (logic6 == false) {
        logic6 = true;
        digitalWrite(Bc, HIGH);
      }
      else {
        logic6 = false;
        digitalWrite(Bc, LOW);
      }
    }
    
    else if (val == '7') {
      if (logic7 == false) {
        logic7 = true;
        digitalWrite(Turbo, HIGH);
      }
      else {
        logic7 = false;
        digitalWrite(Turbo, LOW);
      }
    }
    
    else if (val == '8') {
      if (logic8 == false) {
        logic8 = true;
        digitalWrite(Turbo4, HIGH);
      }
      else {
        logic8 = false;
        digitalWrite(Turbo4, LOW);
      }
    }


    else if (val == '9') {
      if (logic9 == false) {
        logic9 = true;
        digitalWrite(Rough, HIGH);
      }
      else {
        logic9 = false;
        digitalWrite(Rough, LOW);
      }
    }


    else if (val == '0') {
      if (logic10 == false) {
        logic10 = true;
        digitalWrite(Laser, HIGH);
      }
      else {
        logic10 = false;
        digitalWrite(Laser, LOW);
      }
    }
  }
}
