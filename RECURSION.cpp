#include<stdio.h>
#include<conio.h>
int feb(int);
int main()
{
	int n,n1=0;
	printf("Enter the lendth:");
	scanf("%d",&n);
	printf("\nFibonaci series:");
	while(n1<n)
	{
		printf("%4d",feb(n1));
		n1++;
	}
	return(0);
}

int feb(int n1)
{
	if(n1==0)
		return 0;
	else if(n1==1)
		return 1;
	else
		return(feb(n1-1)+feb(n1-2));
}
