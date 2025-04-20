#include<stdio.h>
int main(){
	int n,i;
	printf("enter the range of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elemets in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		int max=arr[0];
		
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("max number is %d",max);
}
