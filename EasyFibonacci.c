#include <stdio.h>
#include <stdlib.h>

int main()
{

    int f = 0, s = 1, n, sum = 0;
    scanf("%d", &n);
    if (n == 0)
    {
        exit(0);
    }
    else if (n == 1)
    {
        printf("%d", f);
        exit(0);
    }
    else if (n == 2)
    {
        printf("%d %d ", f, s);
        exit(0);
    }
    else
    {
        printf("%d %d ", f, s);
        for (int i = 2; i < n; i++)
        {
            sum = f + s;

            if (i == n - 1)
            {
                printf("%d\n", sum);
            }
            else
            {
                printf("%d ", sum);
            }
            f = s;
            s = sum;
        }
    }
    return 0;
}