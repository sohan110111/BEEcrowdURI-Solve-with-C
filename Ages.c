#include <stdio.h>
 
int main() {
 
    float n=1, sum = 1, count = -1;
    while(n > 0.0) {
        scanf("%f", &n);
        sum += n;
        count++;
    }
    printf("%.2f\n", sum/count);
    
    return 0;
}