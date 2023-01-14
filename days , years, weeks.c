#include<stdio.h>

void main(){
 int dy, yr, wk;
 printf("enter your days");
 scanf("%d",&dy);
 yr=dy/365;
 wk=dy/7;
 printf("years :%d\nweeks :%d\ndays :%d",yr,wk,dy);
}