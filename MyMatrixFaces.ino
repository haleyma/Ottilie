 /*
 Created by Rui Santos
 
 All the resources for this project:
 https://randomnerdtutorials.com/
*/

#include "LedControl.h"
#include "binary.h"

/*
 DIN connects to pin 12
 CLK connects to pin 11
 CS connects to pin 10 
*/
LedControl lc=LedControl(12,11,10,1);

// delay time between faces
unsigned long delaytime=1000;

// happy face
byte hf[8]= {B00111100,B01000010,B10100101,B10000001,B10100101,B10011001,B01000010,B00111100};
// neutral face
byte nf[8]={B00111100, B01000010,B10100101,B10000001,B10111101,B10000001,B01000010,B00111100};
// sad face
byte sf[8]= {B00111100,B01000010,B10100101,B10000001,B10011001,B10100101,B01000010,B00111100};
// smile
byte sm[8]= {B00000000,B00000000,B00000000,B11111111,B01000010,B00100100,B00011000,B00000000};
//circle
byte cr[8]= {B00000000,B00011000,B00100100,B00100100,B00100100,B00011000,B00000000,B00000000};
// Whistle1
byte w1[8]= {B00000000,B00000000,B00110000,B01001000,B01001000,B00110000,B00000000,B00000000};
//Whistle2
byte w2[8]= {B00000000,B00000000,B00000000,B00000000,B01000000,B10100000,B10100000,B01000000};
//Whistle3
byte w3[8]= {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B11000000};
//happy
byte hy[8]= {B00000000,B00000000,B01000010,B11000011,B00100100,B00011000,B00000000,B00000000};





void setup() {
  lc.shutdown(0,false);
  // Set brightness to a medium value
  lc.setIntensity(0,8);
  // Clear the display
  lc.clearDisplay(0);  
}

void drawFaces(){
//  // Display sad face
//  lc.setRow(0,0,sf[0]);
//  lc.setRow(0,1,sf[1]);
//  lc.setRow(0,2,sf[2]);
//  lc.setRow(0,3,sf[3]);
//  lc.setRow(0,4,sf[4]);
//  lc.setRow(0,5,sf[5]);
//  lc.setRow(0,6,sf[6]);
//  lc.setRow(0,7,sf[7]);
//  delay(delaytime);
//  
//  // Display neutral face
//  lc.setRow(0,0,nf[0]);
//  lc.setRow(0,1,nf[1]);
//  lc.setRow(0,2,nf[2]);
//  lc.setRow(0,3,nf[3]);
//  lc.setRow(0,4,nf[4]);
//  lc.setRow(0,5,nf[5]);
//  lc.setRow(0,6,nf[6]);
//  lc.setRow(0,7,nf[7]);
//  delay(delaytime);
//  
//  // Display happy face
//  lc.setRow(0,0,hf[0]);
//  lc.setRow(0,1,hf[1]);
//  lc.setRow(0,2,hf[2]);
//  lc.setRow(0,3,hf[3]);
//  lc.setRow(0,4,hf[4]);
//  lc.setRow(0,5,hf[5]);
//  lc.setRow(0,6,hf[6]);
//  lc.setRow(0,7,hf[7]);
//  delay(delaytime);

    // Display smile
  lc.setRow(0,0,sm[0]);
  lc.setRow(0,1,sm[1]);
  lc.setRow(0,2,sm[2]);
  lc.setRow(0,3,sm[3]);
  lc.setRow(0,4,sm[4]);
  lc.setRow(0,5,sm[5]);
  lc.setRow(0,6,sm[6]);
  lc.setRow(0,7,sm[7]);
  delay(delaytime);

   // Display circle
  lc.setRow(0,0,cr[0]);
  lc.setRow(0,1,cr[1]);
  lc.setRow(0,2,cr[2]);
  lc.setRow(0,3,cr[3]);
  lc.setRow(0,4,cr[4]);
  lc.setRow(0,5,cr[5]);
  lc.setRow(0,6,cr[6]);
  lc.setRow(0,7,cr[7]);
  delay(delaytime);

   // Display Whistle1
  lc.setRow(0,0,w1[0]);
  lc.setRow(0,1,w1[1]);
  lc.setRow(0,2,w1[2]);
  lc.setRow(0,3,w1[3]);
  lc.setRow(0,4,w1[4]);
  lc.setRow(0,5,w1[5]);
  lc.setRow(0,6,w1[6]);
  lc.setRow(0,7,w1[7]);
  delay(delaytime);

     // Display Whistle2
  lc.setRow(0,0,w2[0]);
  lc.setRow(0,1,w2[1]);
  lc.setRow(0,2,w2[2]);
  lc.setRow(0,3,w2[3]);
  lc.setRow(0,4,w2[4]);
  lc.setRow(0,5,w2[5]);
  lc.setRow(0,6,w2[6]);
  lc.setRow(0,7,w2[7]);
  delay(delaytime);

       // Display Whistle3
  lc.setRow(0,0,w3[0]);
  lc.setRow(0,1,w3[1]);
  lc.setRow(0,2,w3[2]);
  lc.setRow(0,3,w3[3]);
  lc.setRow(0,4,w3[4]);
  lc.setRow(0,5,w3[5]);
  lc.setRow(0,6,w3[6]);
  lc.setRow(0,7,w3[7]);
  delay(delaytime);

   // Display happy
  lc.setRow(0,0,hy[0]);
  lc.setRow(0,1,hy[1]);
  lc.setRow(0,2,hy[2]);
  lc.setRow(0,3,hy[3]);
  lc.setRow(0,4,hy[4]);
  lc.setRow(0,5,hy[5]);
  lc.setRow(0,6,hy[6]);
  lc.setRow(0,7,hy[7]);
  delay(delaytime);
}

void loop(){
  drawFaces();
}
