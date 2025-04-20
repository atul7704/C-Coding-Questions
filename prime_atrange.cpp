#include<stdio.h>
int main()
{
	int i,x,sum=0;	
	for(x=1;x<100;x++)
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				break;
			}
		}
		if(i==x)
		{
			printf("%d\n",i);
			sum=sum+i;	
		}
	}
		printf("sum is %d",sum);
}
