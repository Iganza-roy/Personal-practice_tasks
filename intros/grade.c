#include <stdio.h>
int main()

{
    int Physics, Chemistry, Computer, Total;
    float Average;

    printf("Enter Physics marks: ");
    scanf("%d", &Physics);

    printf("Enter Chemistry marks: ");
    scanf("%d", &Chemistry);

    printf("Enter Computer marks: ");
    scanf("%d", &Computer);

    Total=Chemistry+Physics+Computer;
    Average=Total/3;

    if(Average<40)
    {
        printf("Grade F");
    }

    else if(Average>40<50)
    {
        printf("Grade E");
    }

    else if(Average>50<60)
    {
        printf("Grade D");
    }

    else if(Average>60<70)
    {
        printf("Grade C");
    }

    else if(Average>70)
    {
        printf("Grade B");
    }
    else
    {
        printf("Grade A");
    }

    printf("\nTotal= %d\nAverage= %.2f", Total, Average);
    return 0;

}
