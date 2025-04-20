#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("the sum of the array is %d",sum);
	
}
