#include<stdio.h>

int main()
{
    int a ,b,c,d,e,f;
    printf("Enter your money");
    scanf("%d",&a);
    b=a/2000;
    c=a%2000;
    d=c/500;
    e=c%500;
    f=e%100;
    printf("2000=%d\n500=%d\n100=%d",b,d,f);
    return 0;
}