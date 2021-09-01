#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5],i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("Enter a no:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum:%d\n",sum);
	printf("Avg:%d",sum/5);
}
