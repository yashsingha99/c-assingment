#include<stdio.h>
#include<conio.h>

int main() {
    int a, b, c;
    printf("enter the first number=");
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    c = a ;
   a = b; 
    b = c;
    getch();
   
    printf("first number is : %d\nsecond number is : %d",a, b);
    
    return 0;
}
