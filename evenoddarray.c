#include<stdio.h>
int main()
{
	int n,i,even=0,odd=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("the even number in array is %d ",even);
	printf("\n");
	printf("the odd number in array is  %d ",odd);
}
