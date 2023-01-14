#include<stdio.h>
void main()
{
int q,y,r,m,s;
r=1;
s=2;
printf("Enter years : ");
scanf("%d",&y);
printf("press 1 for p.g. press 2 for u.g. ");
printf("enter your graduation :");
scanf("%d",&m);
if(y>10 && m==r)
printf("75000");
else if(y<10 && m==r)
printf("65000");
else if(y<10 && m==s)
printf("45000");
else
printf("not defined");

}