#include <stdio.h>

int main()
{

    int testCase;
    scanf("%d", &testCase);
    int number;
    char ch;
    int t = 0, c = 0, r = 0, s = 0;
    while (testCase--)
    {
        scanf("%d %c\n", &number, &ch);
        t += number;
        if (ch == 'C')
        {
            c += number;
        }
        else if (ch == 'R')
        {
            r += number;
        }
        else
        {
            s += number;
        }
    }

    printf("Total: %d cobaias\n", t);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %c\n", (float)(c * 100) / (float)t, 37);
    printf("Percentual de ratos: %.2f %c\n", (float)(r * 100) / (float)t, 37);
    printf("Percentual de sapos: %.2f %c\n", (float)(s * 100) / (float)t, 37);

    return 0;
}