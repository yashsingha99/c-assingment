#include<stdio.h>
void main(){
int x,y;
printf("Enter two co-ordinate :");
scanf("%d%d",&x,&y);
if(x>0 && y>0)
printf("Quardent is first");
else if (x<0 && y>0)
printf("Quardent is second");
else if (x<0 && y<0)
printf("Quardent is third");
else if(x>0 && y<0)
printf("Quardent is forth");
else
printf("OOPS! DATA ISN't DEFINDE ");
}