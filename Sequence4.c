#include <stdio.h>
 
int main() {
 
    for(float i = 0; i <= 2.2; i+=0.2){
        for(float j = 1; j <= 3; j++){
            if(i > 0 && i < 1 || i > 1 && i < 2) {
                printf("I=%.1f J=%.1f\n", i, i+j);
            } else {
                printf("I=%.0f J=%.0f\n", i, i+j);
            }
        }
    }
 
    return 0;
}