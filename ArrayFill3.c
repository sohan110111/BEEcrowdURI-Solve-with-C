#include <stdio.h>
 
int main() {
 
    double n;
    scanf("%lf", &n);
    printf("N[0] = %.4lf\n", n);
    for(int i = 1; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, (n /= 2.0));
    }
 
    return 0;
}