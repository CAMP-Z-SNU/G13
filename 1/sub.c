#include<stdio.h>
int main(){
    int num1,num2,difference;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second nuber:");
    scanf("%d",&num2);
    difference=num1-num2;
    printf("the difference between %d and %d is %d\n",num1,num2,difference);
    return 0;
}