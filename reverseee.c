#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&arr[i]);
	}
	printf("the reverse of the array is :");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

}
