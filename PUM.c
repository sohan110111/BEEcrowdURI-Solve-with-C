#include <stdio.h>
 
int main() {
 
    int n, k = 1;
    scanf("%d", &n);
    while(n--) {
        for(int i = 1; i<=3; i++) {
            printf("%d ", k++);
        }
        printf("PUM\n");
        k++;
    } 
 
    return 0;
}