#include<stdio.h>
int main()
{
	int n,i,temp,j;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(j=0;j<n-1;j++)
	{
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<=arr[i+1])
		{
		 arr[i]=arr[i+1];
		}
		if(arr[i]>arr[i+1])
		{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
}
