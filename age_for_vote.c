#include<stdio.h>

void main(){
int age;
printf("Enter your age :");
scanf("%d",&age);
(age>=18) && printf("eligible");
(age<18) && printf("not eligible");
}