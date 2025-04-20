#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is a greatest number",a);
	}
	else if(b>c&&b>c)
	{
		printf("%d is a greatest number",b);
	}
	else
	{
		printf("%d is a greatest number",c);
	}
}
