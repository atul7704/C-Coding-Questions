#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp;
	for(i=0;i<=n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	printf("the sorted array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
