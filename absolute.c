#include<stdio.h>

void main(){
int a,b,c;
printf("Enter a two no.s is :");
scanf("%d%d",&a,&b);
c=a*(a<=b) + b*(b<a);
printf("smallest no. is : %d",c);
}