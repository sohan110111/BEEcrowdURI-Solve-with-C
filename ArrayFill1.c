#include <stdio.h>
 
int main() {
 
    int value;
    scanf("%d", &value);
    for(int i = 0; i <= 9; i++){
        printf("N[%d] = %d\n", i, value);
        value*=2;
    }
 
    return 0;
}