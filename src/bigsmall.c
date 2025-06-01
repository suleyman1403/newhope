#include<stdio.h>

int main (){

    int big;
    int num1;
    int num2;
    int num3;

scanf("%d %d %d",&num1,&num2, &num3);
big=num1;

if (num2 > big)
{
    big=num2;
}
if (num3 > big)
{
    big=num3;
}
printf("%d", big);
    return 0;
}
