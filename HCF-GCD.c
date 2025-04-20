#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	for(i=a<b?a:b;i>0;i--)
	{
		if(a%i==0&&b%i==0)
		{
			printf("GCD is %d",i);
			break;
		}
	}
}
