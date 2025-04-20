#include<stdio.h>
int main(){
	int n,i,max;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the value in array\n");
	for(i=0;i<n;i++){
	 max=arr[0];
		scanf("%d",&arr[i]);
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("the greatest number in array is %d",max);
}
