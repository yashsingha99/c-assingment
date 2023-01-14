#include<stdio.h>

int main()
{
 int a, b=1;

    printf("enter a number ");
    scanf("%d",&a) ;
    if((a&1)==0) 
    printf("%d is even ", a) ;
    else 
    printf("%d is odd", a) ;
    
    return 0;
}