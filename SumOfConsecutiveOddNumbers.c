#include <stdio.h>
 
int main() {
 
    int testCase, startSequence, count, sum = 0;
    scanf("%d", &testCase);
    while (testCase--) {
        scanf("%d%d", &startSequence, &count);
        while(count) {
            if(startSequence % 2 == 1 || startSequence % 2 == -1) {
                sum += startSequence;
                //printf("%d ", startSequence);
                count--;
            }
            
            startSequence++;
        }
        printf("%d\n", sum);
        sum = 0;
    }
 
    return 0;
}