#include<stdio.h>
int main()
{
	int n,s=0,r,x;
	printf("enter the number\n");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(x==s)
	{
			printf("%d is a armstrong number",s);
	}
	else
	{
		printf(" not a armstrong number",s);
	}
}
