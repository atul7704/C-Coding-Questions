#include<stdio.h>
int main()
{
	int n,i;
	printf("eneter a number\n");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			printf("it is not prime");
			break;
		}
	}
	if(i==n)
	{
		printf("it is a prime number");
	}
}
