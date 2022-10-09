#include <stdio.h>

int main()
{

    float number, sum = 0, count = 0, startSum = 0;
    while (scanf("%f", &number) != EOF)
    {

        if (number < 0 || number > 10)
        {
            printf("nota invalida\n");
        }
        else if (startSum < 2)
        {
            sum += number;
            count++;
            startSum++;
        }
        else
        {
            printf("novo calculo (1-sim 2-nao)\n");
        }
        if (count == 2)
        {
            printf("media = %.2f\n", sum / 2);
            count = 0;
            sum = 0;
        }
        if (number == 1)
        {
            startSum = 0;
        }
        if (number == 2)
        {
            break;
        }
    }

    return 0;
}