#include <stdio.h>
 
int main() {
 
    int t, x, y, sum=0;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &x, &y);
        if(x > y) {
            int temp = x;
            x = y;
            y = temp;
        }
        for(int i = ++x ; i < y; i++) {
            if(i%2==1) {
                sum+=i;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
 
    return 0;
}