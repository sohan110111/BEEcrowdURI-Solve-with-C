#include <stdio.h>
 
int main() {
 
    unsigned long long int first = 0, second = 1, testCase, index, sum = 0;
    scanf("%llu", &testCase);
    while(testCase--){
        scanf("%llu", &index);
        if(index){
            for(int i = 0; i < index; i++) {
                sum = first + second;
                first = second;
                second = sum;
            }
            printf("Fib(%llu) = %llu\n", index, first);
            first = 0, second = 1, sum = 0;
        }else {
            printf("Fib(0) = 0\n");
        }
    }
    return 0;
}