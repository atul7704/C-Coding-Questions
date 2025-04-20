#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter size of row\n ");
	scanf("%d",&a);
	printf("enter the size of column\n");
	scanf("%d",&b);
	int arr1[a][b];
	int arr2[a][b];
	int sum[a][b];
	printf("enter the elements in first matrics\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
printf("enter the elements in second matrics\n");
for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("the sum of the array is\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
