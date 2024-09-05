#include<stdio.h>
int main(){
    int n,d;
    float result;
    printf("enter the numerator:");
    scanf("%d",&n);
    printf("enter the denominator:");
    scanf("%d",&d);
    if (d==0){
    printf("error: division by zero is not allowed.\n");
}else{
    result=(float)n/d;
    printf("the result of %d divided by %d is %.2f\n",n,d,result);
}
return 0;
}