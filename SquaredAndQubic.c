#include <stdio.h>
 
int main() {
 
    int n, k = 1, res = 1;
    scanf("%d", &n);
    while(n--) {
        for(int i = 1; i<=3; i++) {
            res = res*k;
            if (i == 3)
            {
                printf("%d\n", res);
            } else {
                printf("%d ", res);
            }
            
        }
        k++;
        res=1;
    } 
 
    return 0;
}