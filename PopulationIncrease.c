#include <stdio.h>
 
int main() {
 
    int t, pa, pb, count = 0;
    float g1, g2;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d%f%f", &pa, &pb, &g1, &g2);
        while(pa <= pb) {
            pa = pa + ((pa*g1)/100);
            pb = pb + ((pb*g2)/100);
            count++;
            if(count > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(count <= 100) {
            printf("%d anos.\n", count);
        }
        count = 0;
    }
    return 0;
}