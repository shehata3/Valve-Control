int   valve1 = A0;
bool  logic1 = false;

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

int   valve7 = A6;
bool  logic7 = false;

int   valve8 = A7;
bool  logic8 = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(valve1, OUTPUT);
  pinMode(valve2, OUTPUT);
  pinMode(valve3, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()){

    char val = Serial.read();

    if (val == '1') {
      if (logic1 == false) {
        logic1 = true;
        digitalWrite(valve1, HIGH);
      }
      else {
        logic1 = false;
        digitalWrite(valve1, LOW);
      }
    }


    else if (val == '2') {
      if (logic2 == false) {
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
  }
}

