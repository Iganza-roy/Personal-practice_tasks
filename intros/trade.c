#include <stdio.h>
int main()

{
    int BP, SP, profit;

    printf("Enter the buying price: ");
    scanf("%d", &BP);

    printf("Enter the selling price: ");
    scanf("%d", &SP);

    profit=SP-BP;

    if(profit<0)
    {
        printf("loss= %d", profit);
    }
    else if(profit>0)
    {
        printf("profit= %d", profit);
    }
    else
    {
        printf("no profit or loss");
    }
    return 0;
}
