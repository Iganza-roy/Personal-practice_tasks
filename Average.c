#include <stdio.h>

int main()
{
 int math, chem, bio, total;
 float average;

printf("what are the marks for math: ");
scanf("%d", &math);

printf("what are the marks for chem: ");
scanf("%d",&chem);

printf("what are the marks for bio:");
scanf("%d",&bio);

 total= math+chem+bio;
 average=total/3;

 printf("total= %d\naverage %.2f", total, average);
 return 0;
}

