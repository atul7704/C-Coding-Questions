#include<stdio.h>
int main()
{
	int n,i,j,p;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number till where we have to find missing number\n");
	scanf("%d",&p);
	printf("missing number in array is:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=p;j++)
		{
			if(arr[i]==j)
			{
				break;
			}
			printf("%d ",j);
		}
	}
}
