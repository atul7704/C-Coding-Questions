#include<stdio.h>
int main()
{
	int r,n,s=0,p;
	printf("enter a number\n");
	scanf("%d",&n);
	p=n;
	while(n!=0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(p==s)
	{
		printf("%d is a palindrome number",s);
	}
}
