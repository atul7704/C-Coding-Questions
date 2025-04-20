#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("%d is neither positive nor negative",n);
	}
	else if(n<0){
		printf("%d is a negative number",n);
	}
	else
	{
		printf("%d is a positive number",n);
	}
}
