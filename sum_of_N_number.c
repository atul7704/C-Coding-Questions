#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter a range of number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the sum of numbers is %d",sum);
}
