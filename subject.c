//CIT-223-055/2023
//ROY IGANZA KIBATA

#include <stdio.h>

int main()
{
    int marks[9], i, total = 0;
    float avg = 0;

    for (i = 0; i < 9; i++)
    {
        printf("enter marks for sub %d ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    avg = total/9;
    printf("total: %d", total);
    printf("\naverage: %.2f", avg);

    if (avg >= 70)
    {
        printf("\ngrade: A");
    }
    else if (avg >= 60)
    {
        printf("\ngrade: B");
    }
    else if (avg >= 50)
    {
        printf("\ngrade: C");
    }
    else if (avg >= 40)
    {
        printf("\ngrade: D");
    }
    else
    {
        printf("\ngrade: F");
    }
    return 0;
}

