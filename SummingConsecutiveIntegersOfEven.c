#include <stdio.h>

int main()
{

    int number, count = 5, sum = 0;
    while (scanf("%d", &number), number != 0)
    {
        while (count)
        {
            if (number % 2 == 0 || number % -2 == 0)
            {
                sum += number;
                count--;
            }

            number++;
        }
        printf("%d\n", sum);
        sum = 0;
        count = 5;
    }

    return 0;
}