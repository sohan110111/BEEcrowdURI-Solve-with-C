#include <stdio.h>

int isPrime(int n)
{
    int i;
    if (n <= 1)
    {
        return 0;
    }
    if (n == 2 || n == 3)
    {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (isPrime(n))
        {
            printf("%d eh primo\n", n);
        }
        else
        {
            printf("%d nao eh primo\n", n);
        }
    }

    return 0;
}