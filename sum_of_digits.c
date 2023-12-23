#include <stdio.h>

unsigned int sumint(unsigned int k)
{
    //base case
    if (k == 0)
        return 0;
    return (k % 10) + sumint(k / 10);
}

int main()
{

    printf("%i", sumint(567));

 return 0;
}
