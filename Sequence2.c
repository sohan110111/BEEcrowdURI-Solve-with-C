#include <stdio.h>
 
int main() {
 
    for(int i = 1, j=7; i<=9; i+=2, j=7){
        for(int r=0; r<3; r++) {
            printf("I=%d J=%d\n", i, j--);
        }
    }
 
    return 0;
}