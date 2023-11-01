#include <stdio.h>

int greater(int a, int b);

int main()
{
    int num1, num2, great;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    great = greater(num1, num2);

    printf("greater is: %d", great);

    return 0;
}

int greater(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

