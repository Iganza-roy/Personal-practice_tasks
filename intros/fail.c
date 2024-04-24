//using if statements

#include <stdio.h>

int main()

{
    int mark;
    printf("enter the mark scored: ");
    scanf("%d", &mark);

    if(mark>100||mark<0)
    {
        printf("error:mark out of range\n");
    }

    else if(mark<40)
    {
        printf("pass\n");
    }
    else
    {
        printf("pass\n");
    }
    return 0;
}
