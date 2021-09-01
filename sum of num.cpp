#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>=1)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
	}
	printf("%d",sum);
	return(0);
}
