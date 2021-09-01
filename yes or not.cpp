#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	
	int id,pas;
	char c;
	do
	{
	printf("enter your id:");
	scanf("%d",&id);
	printf("enter your pw:");
	scanf("%d",&pas);
	
	printf("Do you want to continue.......(y/n)");
	scanf("%c",&c);
	c=getchar();
	getchar();
	}
	while(c=='y' || c=='Y');
	return(0);
}

