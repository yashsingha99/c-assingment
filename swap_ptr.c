#include<stdio.h>
int main(){
int t,*p,*s,n,m;
printf("Enter two numbber:");
scanf("%d%d",&n,&m);
printf("%d : %d\n",n,m);-
p=&n;
s=&m;
t=*p;
*p=*s;
*s=t;
printf("%d : %d",*p,*s);
}