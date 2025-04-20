#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a*b;i++){
		if(i%a==0&&i%b==0){
			printf("lcm is %d",i);
			break;
		}
	}
}
