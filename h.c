#include<stdio.h>
#include<math.h>
void main()
{
    int base , power ,tot_value;
    
    printf("enter two no.");
    scanf("%d%d",&base,&power);
    
   tot_value = pow(base,power);
     printf("%d",tot_value);
}