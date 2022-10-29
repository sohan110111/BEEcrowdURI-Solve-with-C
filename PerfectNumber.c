#include <stdio.h>
 
int main() {
 
    int t, n, sum = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 1; i < n; i++){
            if(n % i == 0) {
                sum+=i;
            }            
        }
        if(sum == n ) {
            printf("%d eh perfeito\n", n);
        }else {
            printf("%d nao eh perfeito\n", n);
        }
        sum = 0;
    }
 
    return 0;
}