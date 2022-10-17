#include <stdio.h>
 
int main() {
 
    int n, mul = 1;
    scanf("%d", &n);
    while(n >= 1) {
        mul *= n;
        n--;
    }
    printf("%d\n", mul);
 
    return 0;
}