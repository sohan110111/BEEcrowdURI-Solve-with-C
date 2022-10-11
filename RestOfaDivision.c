#include <stdio.h>

int main()
{

    int a, b;

    scanf("%d%d", &a, &b);
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (a++; a < b; a++)
    {
        if (a % 5 == 2 || a % 5 == 3)
        {
            printf("%d\n", a);
        }
    }

    return 0;
}