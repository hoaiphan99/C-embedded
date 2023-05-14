#include<stdio.h>
#include<stdint.h>

uint8_t PORTA=0bxxxxxxxx;

    // pin 0, pin 1, pin 2....

// chop ta chan dau tien cachs nayf khoong dung de viet

// void blinkLED(){
//     PORTA=0b10000000;
//     delay(1000);
//     PORTA = 0b00000000;
//     delay(1000);
// }
// PIN =4
void blinkLED(uint8_t PIN, uint8_t status){
    if(status ==0){
        PORTA = ~PORTA ^(0b10000000>>PIN)&PORTA;
    }else{
        
    }

}
int main(int argc, char const *argv[])
{
    blinkLED(3,0);

     
    return 0;
}
