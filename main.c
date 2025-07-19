
//led toggle code based on c language like_logic for esp32-s3.


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  

void LED_ON() {
    printf("LED ON\n");
}

void LED_OFF() {
    printf("LED OFF\n");
}

void delay_ms(unsigned int ms){
    usleep(ms * 1000); // usleep is in microseconds
}

int main() {
    while (1) {
        LED_ON();
        delay_ms(500);
        LED_OFF();
        delay_ms(500);
    }
    return 0;
}
