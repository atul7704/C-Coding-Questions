#include<stdio.h>
int main()
{
	int i,n,r,s=0;
	for(i=1;i<=1000;i++)
	{
		 n=i;
		while(i!=0)
		{
	    	r=i%10;
	    	s=s+(r*r*r);
	    	i=i/10;
		}	
		
		if(n==s)
		{
			printf("%d",s);
		}
	}
}
