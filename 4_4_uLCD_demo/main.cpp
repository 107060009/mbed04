// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.background_color(0X000000);
    
    uLCD.cls();    

    uLCD.printf("\n107060009\n"); //Default Green on black text

    uLCD.printf("\n  Starting Demo...");

    uLCD.text_width(4); //4X size text

    uLCD.text_height(4);

    uLCD.color(RED);

    for (int i=10; i>=0; --i) {

        uLCD.locate(1,2);

        uLCD.printf("%2D",i);

        wait(.5);

    }

    uLCD.background_color(0X0000FF);

    uLCD.cls();

    uLCD.printf("\n107060009\n");

    for (int k=5; k>=0; --k) {
        
        uLCD.color(BLUE);
        
        uLCD.locate(1,2);

        wait(.5);

    }

    uLCD.background_color(0X00FF00);

    uLCD.cls();

    for (int j=30; j>=0; --j) {

        uLCD.text_width(4);

        uLCD.text_height(4);

        uLCD.color(RED);
        
        uLCD.locate(1,2);

        uLCD.printf("%2D",j);

        wait(.999);

    }
    
    uLCD.background_color(0XFFFFFF);

    uLCD.cls();

}