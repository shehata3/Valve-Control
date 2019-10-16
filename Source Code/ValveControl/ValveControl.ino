int   valve1 = A0;      // This section sets variables to the pins attached to the valves. It also makes a "paired" logic value that holds the state of the respective
bool  logic1 = false;   //pin whether it may be off or on

int   valve2 = A1;
bool  logic2 = false;

int   valve3 = A2;
bool  logic3 = false;

int   valve4 = A3;
bool  logic4 = false;

int   valve5 = A4;
bool  logic5 = false;

int   valve6 = A5;
bool  logic6 = false;

int   valve7 = 2;
bool  logic7 = false;

int   valve8 = 5;
bool  logic8 = false;

int valve9 = 7;
bool logic9 = false;

int valve10 = 10;
bool logic10 = false;

void setup() {
  // all code in the setup function will only be run once, when the arduino is first switched on
  pinMode(valve1, OUTPUT);      // Here we initialize the pins by telling the arduino that they will all be used as output.
  pinMode(valve2, OUTPUT);
  pinMode(valve3, OUTPUT);
  pinMode(valve4, OUTPUT);
  pinMode(valve5, OUTPUT);
  pinMode(valve6, OUTPUT);
  pinMode(valve7, OUTPUT);
  pinMode(valve8, OUTPUT);
  pinMode(valve9, OUTPUT);
  pinMode(valve10, OUTPUT);
  
  digitalWrite(valve1, LOW);    // Here we initialize each pin to start at 0V as to ensure all valves start in the OFF state
  digitalWrite(valve2, LOW);
  digitalWrite(valve3, LOW);
  digitalWrite(valve4, LOW);
  digitalWrite(valve5, LOW);
  digitalWrite(valve6, LOW);
  digitalWrite(valve7, LOW);
  digitalWrite(valve8, LOW);
  digitalWrite(valve9, LOW);
  digitalWrite(valve10, LOW);
  
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
        digitalWrite(valve1, HIGH);
      }
      else {
        logic1 = false;
        digitalWrite(valve1, LOW);
      }
    }


    else if (val == '2') {    //How it works is when the respective value is pressed, it checks the state of the pin (note that the valve and pin are always in the same state).
      if (logic2 == false) {  // This state is then switched, and the new state of the pin/valve is saved in the respective "logic" boolean
        logic2 = true;
        digitalWrite(valve2, HIGH);
      }
      else {
        logic2 = false;
        digitalWrite(valve2, LOW);
      }
    }


     else if (val == '3') {
      if (logic3 == false) {
        logic3 = true;
        digitalWrite(valve3, HIGH);
      }
      else {
        logic3 = false;
        digitalWrite(valve3, LOW);
      }
    }


    else if (val == '4') {
      if (logic4 == false) {
        logic4 = true;
        digitalWrite(valve4, HIGH);
      }
      else {
        logic4 = false;
        digitalWrite(valve4, LOW);
      }
    }
    
    else if (val == '5') {
      if (logic5 == false) {
        logic5 = true;
        digitalWrite(valve5, HIGH);
      }
      else {
        logic5 = false;
        digitalWrite(valve5, LOW);
      }
    }
    
    else if (val == '6') {
      if (logic6 == false) {
        logic6 = true;
        digitalWrite(valve6, HIGH);
      }
      else {
        logic6 = false;
        digitalWrite(valve6, LOW);
      }
    }
    
    else if (val == '7') {
      if (logic7 == false) {
        logic7 = true;
        digitalWrite(valve7, HIGH);
      }
      else {
        logic7 = false;
        digitalWrite(valve7, LOW);
      }
    }
    
    else if (val == '8') {
      if (logic8 == false) {
        logic8 = true;
        digitalWrite(valve8, HIGH);
      }
      else {
        logic8 = false;
        digitalWrite(valve8, LOW);
      }
      }
      
       else if (val == '9') {
        if (logic9 = false) {
          logic9 = true;
          digitalWrite(valve9, HIGH);
        }
        else {
          logic9 = false;
          digitalWrite(valve9, LOW);
        }
      }
      
       else if (val == '0') {
        if (logic10 = false) {
          logic10 = true;
          digitalWrite(valve10, HIGH);
        }
        else {
          logic10 = false;
          digitalWrite(valve10, LOW);
        }
      }
  }
}

