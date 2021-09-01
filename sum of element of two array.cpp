
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a[' '],b[' '],c[' '];
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter a no:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter a no:");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if
		(c[i]=a[i]<b[i])
		printf("%d\n",b[i]);
		else
		printf("%d\n",a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("\n");
		printf("%d+%d=%d",a[i],b[i],c[i]);
	}
	return(0);
}
