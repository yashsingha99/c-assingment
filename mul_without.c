#include<stdio.h>

void main(){
int a,b,c=0;

printf("Enter two no.s");
scanf("%d%d",&a,&b);
int d=a;
while(b!=0)
{
    while (a!=0)
    {
        c++;
        a--;

    }
    b--;
    a=d;
}
printf("mul is %d",c);
}