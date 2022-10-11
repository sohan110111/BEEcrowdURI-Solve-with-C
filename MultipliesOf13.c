#include <stdio.h>

int main()
{

    int a, b, sum = 0;

    scanf("%d%d", &a, &b);
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (; a <= b; a++)
    {
        if (a % 13 != 0)
        {
            sum += a;
        }
    }

    printf("%d\n", sum);

    return 0;
}