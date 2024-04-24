//function: great

#include <stdio.h>

float area(int R);
float circum(int R);
#define pi 3.142

int main()
{
    int radius;
    float A, C;

    printf("enter radius ");
    scanf("%d", &radius);

    A = area(radius);
    C = circum(radius);

    printf("\narea is %.2f\n", A);
    printf("\ncircumference is %.2f\n", C);
    return 0;
}

float area(int R)
{
    return R*R*pi;
}

float circum(int R)
{
    return 2*R*pi;
}
