#include <stdio.h>
 
int main() {
 
    int x, y;
    scanf("%d%d", &x, &y);
    if(x>y) {
        int temp = x;
        x = y;
        y = temp;
    }
    int temp = x;
    x = 1;
    while (x <= y) {
        for (int i = 1; i <= temp; i++) {
            if (i == temp)
            {
                printf("%d\n", x);
                ++x;
            } else {
                printf("%d ", x);
                ++x;
            }
            
        }

    }
  
    return 0;
}