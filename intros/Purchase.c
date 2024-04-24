#include <stdio.h>

int main()
{
 int qty;
 float uprice, cost;

printf("what is the unit price: ");
scanf("%f", &uprice);

printf("how many items: ");
scanf("%d", &qty);

 cost= qty*uprice;

 printf("unit price = %.2f\nquantity = %d\ncost = %.2f\n", uprice, qty, cost);


 int amt;
 float balance;

 printf("how much are you tendering: ");
 scanf("%d", &amt);

 balance =amt-cost;
 printf("tendered= %d\ncost= %.2f\nbalance = %.2f", amt, cost, balance);
 return 0;

}
