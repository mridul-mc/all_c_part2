#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i;
	char str[5];
	printf("Enter a sentens:");
	gets(str);
//	puts(str);
	for(i=0;i<strlen(str);i++)
	{
		printf("%d\n",i);
	}
}
