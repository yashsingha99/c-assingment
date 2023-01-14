#include<stdio.h>
void main()
{
	int n,count=0,sum=0,rem,o,m;
	printf("enter the value=");
	scanf("%d",&n);
	m=n;
	o=m;
	while(n>0){
		n/=10;
		count+=1;
	}
	while(m>0){
		rem=m%10;
		sum=sum+pow(rem,count);
		m/=10;
    }
    if(sum==0){
    	printf("armstrong");
	}
	else
	printf("no");
}

