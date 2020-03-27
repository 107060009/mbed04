#include "mbed.h"

#include "TextLCD.h"


TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{

      int x=30;

      lcd.printf("107060009\n");

      while(true)

      {

            if (x != 0)

            {

            lcd.locate(5,1);

            lcd.printf("%5i",x);    //downconuter display

            wait(1);

            x--;
            
            }

            else
            {
            
            x = 30;

            lcd.locate(5,1);

            lcd.printf("%5i",x);    //downconuter display

            wait(1);

            x--;
            
            }


      }

}