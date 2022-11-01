#include <stdio.h>
 
int main() {
    
    int array[10];
 
    for(int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
        if (array[i] <= 1) {
            printf("X[%d] = 1\n", i);
        } else {
            printf("X[%d] = %d\n", i, array[i]);
        }
    }
 
    return 0;
}