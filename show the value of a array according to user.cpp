#include<stdio.h>
#include<conio.h>
int main()
{
	int l=0,s,n,a[' '],i;
	printf("Enter the lenth:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		//printf("%d\t\t",i);
	//	printf("\n");
		a[l]=i;
		l++;
	}
	
	printf("\nEnter the lendth:");
	scanf("%d",&l);
	
	for(i=0;i<l;i++)
	{
		printf("%d\n",a[i]);
	}
}
