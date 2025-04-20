#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a and b\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is a greater number",a);
	}
	else
	{
		printf("%d is a greater number",b);
	}
	return 0;
}
