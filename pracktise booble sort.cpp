#include<stdio.h>
#include<conio.h>
void show(int a[],int);
void sort(int a[],int);
int bsear(int a[],int,int);
int main()
{
	int a[50],n,item,i,pos;
	printf("Enter the no:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the no:");
		scanf("%d",&a[i]);
	}
	
	printf("Enter the no to search:");
	scanf("%d",&item);
	
	printf("\nBefore search:");
	show(a,n);
	printf("\nAfter sort:");
	show(a,n);
	pos=bsear(a,n,item);
	if(pos!=-1)
		printf("%d found at position %d",item,pos+1);
	else
		printf("%d not found",item);
	return(0);
}

void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}

int bsear(int a[],int n,int item)
{
	int i,high=0,low=0,mid;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(a[mid]==item)
		return mid;
		else if(item<mid)
		high=high-mid;
		else
		low=low+mid;	
	}
	return -1;
}


