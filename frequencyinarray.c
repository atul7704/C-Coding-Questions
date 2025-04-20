#include<stdio.h>
int main()
{
	int n,i,r,count=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number to be find repeatition\n");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{
		if(r==arr[i])
		{
			count++;
		}
	}
	printf("the repeatition of the number is %d  ",count);
}
