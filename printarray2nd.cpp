#include<stdio.h>
#include<conio.h>
int main()
{
	int a[' '],i,j,k,l;
	printf("Ente rthe len:");
	scanf("%d",&l);
	for(j=0;j<l;j++)
	for(i=2;i<l;i++)
	{
		printf("\t%d",i);
		printf("\n");	
	}
	
		a[j]=i;
		for(j=0;j<l;j++)
		printf("\t%d",a[j]);
return(0);
}
