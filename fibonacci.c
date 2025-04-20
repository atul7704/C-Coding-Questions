#include<stdio.h>
int main()
{
	int a=-1,b=1,c,i;
	for(i=0;i<30;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	
}
