#include <stdio.h>
 
int main() {
 
    int m, n, sum=0;
    while(scanf("%d%d", &m, &n) != EOF) {
        if(m <= 0 || n <= 0) {
            break;
        }
        if(m > n) {
            int temp = m;
            m = n;
            n = temp;
        }
        for(; m <= n; m++){
            printf("%d ", m);
            sum += m;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }
 
    return 0;
}