#include<stdio.h>
int main()
{
    int years, graduation;
    printf("enter your experience years\n");
    scanf("%d",&years);
    printf("are you post graduated or under graduated ?\n");
    printf(" if you are post graduated, press 1\n if you are under graduated, press 2.\n");
    scanf("%d",&graduation);
    if ((years>10) && (graduation==1))
    {
        printf("your sallary will be 75000");
    }
        if ((years<10) && (graduation==1))
    {
        printf("your sallary will be 65000");
    }
        if ((years>10) && (graduation==2))
    {
        printf("your sallary will be 45000");
    }
    else{
        printf("you have printed some wrong information");
    }
}