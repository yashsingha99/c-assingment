#include<stdio.h>

void main(){
int a =0,b=1,c=0,d;
printf("enter a no.");
scanf("%d",&d);

while(c<=d)
{
   printf("%d ",b);
   c=a+b;
   a=b;
   b=c;
}



}