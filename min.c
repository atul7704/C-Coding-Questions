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
		int min=arr[0];
		
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("min number is %d",min);
}
