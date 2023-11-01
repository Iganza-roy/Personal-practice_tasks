//sorting an array

#include <stdio.h>

int main()
{
    int age[7], i, check, temp, below_18 = 0;

    for (i = 0; i < 7; i++)
    {
        printf("Enter age for students %d: ", i + 1);
        scanf("%d", &age[i]);
    }
    do
    {
        check = 0;

        for (i = 0; i < 6; i++)
        {
            if (age[i] > age [i+1])
            {
                temp = age[i];
                age[i] = age [i + 1];
                age[i + 1] = temp;
                check = 1;
            }
        }
    }
    while(check == 1);

    for(i = 0; i < 7; i++)
    {
        if(age[i] < 18)
        {
            below_18++;
        }
        printf("%d\n", age[i]);
    }
    printf("\nnumber of students below 18 are: %d\n", below_18);
    return 0;
}
