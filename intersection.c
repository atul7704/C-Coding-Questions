#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("enter the size of first array\n");
	scanf("%d",&n1);
	int arr1[n1];
	printf("enter the size of second array\n");
	scanf("%d",&n2);
	int arr2[n2];
	int arr3[n1+n2];
	printf("enter the elements in first array\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("enter the elements in second array\n");
	for(j=0;j<n2;j++)
	{
		scanf("%d",&arr2[j]);
	}
	printf("the intersection of two array is:\n");
	for(i=0;i<n1;i++)
	{
	for(j=0;j<n2;j++)
	{
		if(arr1[i]==arr2[j])
		{
			printf("%d ",arr1[i]);
			break;
		}
	}
	}
	
	
}
