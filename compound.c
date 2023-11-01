#include <stdio.h>

int main(void)

{
    int years, i;
    float PA, cmpdint, interest, rate;

    rate = 0.1;

    printf("Enter principle amount and number of years: ");
    scanf("%f %d", &PA, &years);

    cmpdint = 0;

    for(i = 1; i <= years; i++)
    {
        interest = PA * rate;
        printf("interest for year %d, is %.2f\n", i, interest);
        cmpdint += interest;
        PA += interest;
    }
    printf("total compound interest is %.2f\n", cmpdint);
    return 0;
}
