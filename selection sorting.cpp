#include<stdio.h>
#include<conio.h>
int show(int a[],int);
int selsort(int a[],int);

int main()
{
	int a[20],n,i;
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a no:");
		scanf("%d",&a[i]);
	}
	printf("\nbefore sort:");
	show(a,n);
	selsort(a,n);
	printf("\nafter sort:");
	show(a,n);
	return(0);
}
/******************************************************/
int  show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
/*****************************************************/
int selsort(int a[],int n)
{
	/*int i,j,large,pas;
	for(i=n-1;i>0;i++)
	{
		large=a[0];
		pas=0;
		for(j=1;j<=i;j++)
		{
			if(large<a[j])
			{
				large=a[j];
				pas=j;
			}
		}
		a[pas]=a[i];
		a[i]=large;
	}*/
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;i<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}

