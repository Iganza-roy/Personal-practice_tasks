#include<stdio.h>
#define rate 0.11

int main()
{
    int years;
    float principle, interest;

    printf("enter principle amount: ");
    scanf("%f", &principle);

    printf("enter number of years: ");
    scanf("%d", &years);

    interest= principle*rate*years;

    printf("interest= %.2f", interest);
    return 0;
}
