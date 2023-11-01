//multiplication table of 7
#include <stdio.h>

int main()
{
    int k, n, m;
    printf("enter number: ");
    scanf("%d", &n);

    for(k = 1; k <= 25; k++)
        {
         m=k*n;
         printf("%d*%d=%d\n", n, k, m);
        }
    return 0;
}

