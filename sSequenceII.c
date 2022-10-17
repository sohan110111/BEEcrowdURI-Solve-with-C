#include <stdio.h>
#include <math.h>
 
int main() {
 
    float n = 1, s = 0;
    for(float i = 0; n <= 39; i++) {
        s += (n/pow(2, i));
        /* if( n == 39) {
            break;
        } */
        n+=2;
    }
    printf("%.2f\n", s);
 
    return 0;
}