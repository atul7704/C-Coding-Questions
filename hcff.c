#include<stdio.h>
int main()
{
	int a,b,i,hcf=1;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	for(i=0;i<=a||i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
		  hcf=i;
		}
	}
	printf("the hcf is %d",hcf);
}
