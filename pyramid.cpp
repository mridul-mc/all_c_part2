#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i;
	printf("\nEnter the how many(max-20):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the no:");
		scanf("%d",&a[i]);
	}
	printf("\n nos in list:");
	for(i=0;i<n;i++)
	printf("4%d",a[i]);
	return(0);
	
}
