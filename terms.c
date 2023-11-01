#include <stdio.h>

int main()
{
    int num, i = 1, n = 2, m=0;

    printf("enter number of terms ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d\t", n);
        m += n;
        n *= 3;
        i++;
    }
    printf("\n sum = %d", m);

    return 0;
}
