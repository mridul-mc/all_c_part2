#include<stdio.h>
#include<conio.h>
int sunding (int n);
int main()
{
	int n,sum;
	printf("Enter no:");
	scanf("%d",&n);
	
	sum=sunding(n);
	
	printf("\nNo=%d sum=%d",n,sum);
	
	return(0);
}
int sunding(int n)
{
	if(n==0)
		return 0;
	else
		return(n%10+sunding(n/10));
}

