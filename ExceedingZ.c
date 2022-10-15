#include <stdio.h>

int main()
{

    int x, z;
    scanf("%d", &x);
    while (1)
    {
        scanf("%d", &z);
        if (z > x)
        {
            break;
        }
    }
    int sum = x;
    int count = 0;
    if (x < 0)
    {
        while (sum < z)
        {
            sum += x;
            x++;
            count++;
        }
        printf("%d\n", count);
    }
    
    else
    {
        count++;

        while (sum < z)
        {
            sum += x;
            x++;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}