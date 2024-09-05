#include<stdio.h>
int main() {
    int a, b, diff;
    printf ("Enter two integers ");
    scanf("%d %d", &a,&b);
    diff = a-b;
    printf("%d - %d = %d", a, b, diff);
return 0;
}