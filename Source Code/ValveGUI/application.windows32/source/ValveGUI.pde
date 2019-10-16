import controlP5.*;
import processing.serial.*;

Serial port;

ControlP5 cp5;
PFont font1;
PFont font2;
PFont font3;

void setup() {      //In the setup function all commands are run only once. This is where we initialize the screen and print out all the buttons to the screen
  size(800, 900);
  
  printArray(Serial.list());
  port = new Serial(this, "COM10", 9600);
  
  
  cp5 = new ControlP5(this);
  font1 = createFont("calibri light", 20);
  font2 = createFont("calibri bold", 40);
  font3 = createFont("calibri light", 15);
  textAlign(CENTER, CENTER);
  

  
  cp5.addToggle("TURBO")      //example of button initialization for the "TURBO" button
    .setPosition(150, 130)    //sets where on the screen to place said button
    .setSize(100, 120)        //sets the size of the button
    .setFont(font3)           //sets the font of the button
    .align(CENTER, CENTER, CENTER, CENTER)  //centers the text of the button
  ;
  
  cp5.addToggle("TURBO4")
    .setPosition(150, 300)
    .setLabel("Turbo For-Line")  //This changes the printed label of the button
    .setSize(100, 120)
    .setFont(font3)
    .align(CENTER, CENTER, CENTER, CENTER)
    ;
    
  cp5.addToggle("ROUGH")
    .setPosition(385, 330)
    .setSize(100, 70)
    .setFont(font3)
    .align(CENTER, CENTER, CENTER, CENTER)
  ;
  
  cp5.addToggle("LASER")
    .setPosition(550, 300)
    .setLabel("Laser Valve")
    .setSize(100, 120)
    .setFont(font3)
    .align(CENTER, CENTER, CENTER, CENTER);
    
  cp5.addToggle("B0")
    .setPosition(225, 500)
    .setSize(100, 120)
    .setFont(font1)
    .align(CENTER, CENTER, CENTER, CENTER)
  ;
    
  cp5.addToggle("B2")
    .setPosition(160, 675)
    .setSize(100, 120)
    .setFont(font1)
    .align(CENTER, CENTER, CENTER, CENTER)
  ;
    
  cp5.addToggle("B1")
    .setPosition(290, 675)
    .setSize(100, 120)
    .setFont(font1)
    .align(CENTER, CENTER, CENTER, CENTER)
  ;
    
  cp5.addToggle("A0")
    .setPosition(475, 500)
    .setSize(100, 120)
    .setFont(font1)
    .align(CENTER, CENTER, CENTER, CENTER)
  ;
    
  cp5.addToggle("A2")
    .setPosition(410, 675)
    .setSize(100, 120)
    .setFont(font1)
    .align(CENTER, CENTER, CENTER, CENTER);
  ;
    
  cp5.addToggle("A1")
    .setPosition(540, 675)
    .setSize(100, 120)
    .setFont(font1)
    .align(CENTER, CENTER, CENTER, CENTER);
  ;
}


void draw() {    //this is the part of the code where the purely visual part of the GUI is processed
 background(130, 145, 165);
 fill(255, 255, 255);
 textFont(font2);
 text("Valve Control", 395, 50);
 
  fill(190);                  //The following code creates the boxes in which valve groups "A" and "B" are placed, as well as the valve-like shape at the top of the screen
  stroke(190);
  //rect(75, 490, 250, 325);    //B
  //rect(475, 490, 250, 325);   //A
  rect(150, 490, 250, 325);
  rect(400, 490, 250, 325);
  rect(400, 100, 75, 320);    //Valve main
  rect(260, 165, 140, 45);    //Valve side
  rect(240, 152.5, 25, 70);   //Valve side2
  rect(160, 240, 7.5, 60);     //Valve side3
  
  
  stroke(0);             //valve line decor
  line(400, 105, 475, 105);   //top x1
  line(400, 250, 475, 250);   //mid x2
  line(400, 240, 475, 240);   
  line(400, 410, 475, 410);   //bottom x2 
  line(400, 415, 475, 415);
  line(295, 165, 295, 210);   //side x1
  
  
  
}


void A0() { port.write('1'); }        // This is where the functionality of the code comes from. It simply sets each button to send a respective, arbitrarily chosen, ascii value to the aruino.
                                      //It is crucial that the values match on the arduino. Meaning that if the gate valve "A0" is connected to pin A0 on the arduino as it currently is,
void A1() { port.write('2'); }        //the arduino must be programmed to switch the state of pin A0 when it recieves the ascii value '1', otherwise the wrong valve may be turned on, if any at all.

void A2() { port.write('3'); }

void B0() { port.write('4'); }

void B1() { port.write('5'); }

void B2() { port.write('6'); }

void TURBO() { port.write('7'); }

void TURBO4() { port.write('8'); }

void ROUGH() { port.write('9'); }

void LASER() { port.write('0'); }
