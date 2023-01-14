#include<stdio.h>

void main(){
int a;
printf("Enter a no.");
scanf("%d",&a);
if((a&1)==0)
printf("%d is even",a);
else
printf("%d is odd",a);
}