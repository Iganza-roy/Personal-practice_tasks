#include <stdio.h>

int main()
{
    int earning;
    float MA, HA, GP, NHIF, payee, Pay;

    printf("enter your earnings: ");
    scanf("%d", &earning);

    if(earning<15000)
    {
        HA=0.5*earning;
        MA=0.35*earning;
    }
    else if(earning<=50000)
    {
        HA=0.65*earning;
        MA=0.5*earning;
    }
    else if(earning<=100000)
    {
        HA=0.7*earning;
        MA=0.7*earning;
    }
    else if(earning<=500000)
    {
        HA=0.85*earning;
        MA=0.75*earning;
    }
    else
    {
        HA=0.9*earning;
        MA=1.0*earning;
    }
    GP= earning+MA+HA;
    NHIF = 0.0375*GP;
    payee = 0.3*GP;
    Pay= GP -(payee+NHIF);

    printf("medical allowance= %.2f\n", MA);
    printf("House allowance= %.2f\n", HA);
    printf("Gross pay= %.2f\n", GP);
    printf("pay = %.2f\n", Pay);

    return 0;
}

