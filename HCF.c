#include<stdio.h>
int main()
{
	int a,b,i,hcf;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	for( i=1;i<=a||i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			hcf=i;
		}
	}
	printf("the hcf of two numbers is %d\n",hcf);
}
