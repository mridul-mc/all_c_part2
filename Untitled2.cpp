#include<stdio.h>
#include<conio.h>
int main()
{
	int dayno;
	printf("\nEnter the day no:");
	scanf("%d",&dayno);
	switch(dayno)
	{
		case 1:
			printf("\nmonday");
			break;
		case 2:
		    printf("\nthuesday");
			break;
		case 3:
		     printf("\nwednesday");
			break;	
		case 4:
			printf("\nthursday");
			break;
		case 5:
			printf("\nfriday");
			break;
		case 6:
			printf("\nsaturday");
			break;
		case 7:
			printf("\nsunday");
			break;
		default:
			printf("\nWrong input");
			break;
	
	}
	return(0);
}
