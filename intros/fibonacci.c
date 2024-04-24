#include <stdio.h>

int factorial(int i)
{
    if (i == 0)
    {
        return 1;
    }
    return i * factorial(i -1);
}

int main()
{
    int i = 12;

    printf("12! = %d", factorial(i));
    return 0;
}
