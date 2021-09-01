#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,num,sum,d;
	printf("\nArmstron number between 100-999:");
	for(n=100;n<=999;n++)
	{
		num=n;
		sum=0;
		while(num>0)
		{
			d=num%10;
			sum=sum+pow(d,3);
			num=num/10;
		}
	if(n==sum)
	printf("\n%d ",n);
	}
	return(0);
}
