#include <stdio.h>
 
int main() {
 
    for(int i = 1, j=7; i<=9; i+=2, j+=5){
        for(int rotate = 0; rotate<3; rotate++) {
            printf("I=%d J=%d\n", i, j--);
        }
    }
 
    return 0;
}