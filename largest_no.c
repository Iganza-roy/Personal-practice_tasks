
#include <stdio.h>
int main()

{
    int num1, num2, num3, largest;

    printf("enter num1: ");
    scanf("%d", &num1);

    printf("enter num2: ");
    scanf("%d", &num2);

    printf("enter num3: ");
    scanf("%d", &num3);

    largest =num1;

    if (num1 > largest)
    {
        largest= num2;
    }

    if (num3 > largest)
    {
        largest= num3;
    }

    printf("%d\n", largest);
    return 0;

}
