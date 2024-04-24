//working with constants

#include<stdio.h>

int main()
{
    int qty;
    float uprice, cost, payable, Discount;
    const float discount= 0.08;

    printf("what is unit price: ");
    scanf("%f", &uprice);

    printf("how many: ");
    scanf("%d", &qty);

    cost =uprice*qty;

    Discount=cost*discount;
    payable=cost-Discount;

    printf("cost= %.2f\n Discount= %.2f\n payable= %.2f\n" ,cost, discount, payable);
    return 0;
}

