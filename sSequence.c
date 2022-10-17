#include <stdio.h>
 
int main() {
 
    float n = 1, s = 0;
    for(float i = 1; i <= 100; i++) {
        s += n/i;
    }
    printf("%.2f\n", s);
 
    return 0;
}