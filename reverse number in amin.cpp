#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[6],temp,i,j;
	for(i=0;i<6;i++)
	{
		printf("Enter a no:");
		scanf("%d",&arr[i]);
	}
	i=0;
	j=6-1;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
}
