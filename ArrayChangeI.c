#include <stdio.h>
 
int main() {
 
    int N[20];
    for(int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    int j = 0;
    for(int i = 19; i >= 0; i--) {
        printf("N[%d] = %d\n", j, N[i]);
        j++;
    }
 
    return 0;
}