#include<stdio.h>
#include<conio.h>
void packarray(int a[],int);
void showarray(int a[],int);
int main()
{
	int num[30],n,i;
	printf("Enter how many no u store:");
	scanf("%d",&n);
	for(i-0;i<n;i++)
	{
		printf("Enter the no:");           //store the value in array
		scanf("%d",&num[i]);
	}
	printf("\nList as enter:");
	showarray(num,n);                        //show the list before remove
	printf("\nList after remove dublicate:");
	packarray(num,n);                         //list after remove dublicate value
	return(0);
}
///////////////////////////*///////////////////////
void showarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
}
///////////////////////////*///////////////////////
void packarray(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				a[k]=a[k+1];
				n--;
			}
			else
			j++;
		}
	}
	showarray(a,n);
}
