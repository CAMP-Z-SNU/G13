#include <stdio.h>
int main()
{
    int a,b;
    float c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf ("enter the second number:");
    scanf("%d",&b);
    if (b==0)
    {printf("ERROR");}
    else
    {
    c=a/b;
    scanf("%f",&c);
    printf("result: %f",c);}
    return 0;

}