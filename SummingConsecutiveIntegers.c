#include <stdio.h>
 
int main() {
 
    int a, n, sum=0;
    scanf("%d%d", &a, &n);
    while(n < 1) {
        scanf("%d", &n);
    }
    for(int i = 1 ; i <= n; i++) {
        sum+=a++;
    }
    printf("%d\n", sum);
    return 0;
}