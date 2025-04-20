#include<stdio.h>
int pow(int a,int b)
{
	int z=1,i;
	for(i=1;i<=b;i++)
	{
		z=z*a;

	}
		printf("the power is %d",z);
}
int main()
{
	int a,b;
	printf("enter the coefficient \n");
	scanf("%d",&a);
	printf("enter the power\n");
	scanf("%d",&b);
	pow(a,b);
}
