#include <stdio.h>
 
int main() {
 
    float number, sum = 0, count = 0;
    while(scanf("%f", &number) != EOF) {
        if(number < 0 || number > 10) {
            printf("nota invalida\n");
        }else {
            sum += number;
            count++;
        }
        if(count == 2) {
            break;
        }
    }
    printf("media = %.2f\n", sum / count);
    return 0;
}