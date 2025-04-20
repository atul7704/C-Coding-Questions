#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			arr[i]=arr[i+1];
		}
		printf("%d ",arr[i]);
			}
}
