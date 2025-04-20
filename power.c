#include<stdio.h>
int main()
{
	int x,y,s=1,i;
	printf("enter the number\n");
	scanf("%d",&x);
	printf("enter the power\n");
	scanf("%d",&y);
	for(i=0;i<y;i++)
	{
		s=s*x;
	}
	printf("power of number is %d",s);
}
