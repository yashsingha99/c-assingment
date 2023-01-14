#include<stdio.h>
#include<math.h>
void main(){
int a,b,c,d,rem,sum=0;
scanf("%d",&a);
b=a;
c=a;
while(a>0){
a=a/10;
d=d+1;
}
while (b>0){
rem=b%10;
b=b/10;
sum=sum+pow(rem,d);
}
if(sum == c)
printf("a");
else
printf("c ki maa ki chut");







}
