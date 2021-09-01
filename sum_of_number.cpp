#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter the no:");
	scanf("%d",&n);
	while(n>=1)
	{
		rem=(n%10);
		n=(n/10);
		sum=(sum-rem);
	}
printf("The no is:%d",sum);
return(0);
}
