#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==0)
		{
			count++;
		}
	}
	printf("the count of 0 in array is %d ",count);
}
