#include<stdio.h>

void main(){
int H,L,h,g;
printf("Enter heads and legs : ");
scanf("%d%d",&H,&L);
g=(L-2*H)/2;
h=H-g;
printf("no.s of hen is %d\n no.s of goat iks %d",h,g);

}