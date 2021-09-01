#include<stdio.h>
#include<conio.h>
int main()
{
	int ts=0,n,rem;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		ts=ts+rem;
		n=n/10;
	}
	printf("%d",ts);
}
