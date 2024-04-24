//odd number
#include <stdio.h>

int main()
{
    int k;

    for(k = 10; k <= 50; k++)
    {
        if (k % 2 != 0)
        {
            printf("%d\t", k);
        }
    }
    return 0;
}
