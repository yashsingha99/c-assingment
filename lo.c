#include<stdio.h>

void main(){
    int i , j,n,m; 
    
printf("Enter rows and coloum");
scanf("%d %d",&n,&m);
for(i=1 ; i<=m;i++)
{
    char h='A';
    for (j=1 ; j <=n ; j++)
    {
        if(j>=i&&j<=(n+1)-i){
        printf("%c",h);
        h++;
        }
        else
        printf(" ");
    }
    //h++;
    printf("\n");
}
}