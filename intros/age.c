#include <stdio.h>

int main()
{
    int age[5], i;
    float sum = 0, avg, oldest, lowest;

    for (i = 0; i < 5; i++)
    {
        printf("enter age of stds %d: ", i+1);
        scanf("%d", &age[i]);
    }
    oldest = age[0];
    lowest = age[0];

    printf ("\nAges entered\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", age[i]);
        sum += age[i];
        if (oldest < age[i])
        {
           oldest = age[i];
        }

        if (lowest > age[i])
        {
           lowest = age[i];
        }
    }
    avg = sum/5;
    printf("sum = %.2f\n", sum);
    printf("avg = %.2f\n", avg);
    printf("oldest = %.0f\n", oldest);
    printf("youngest = %.0f\n", lowest);

    return 0;
}
