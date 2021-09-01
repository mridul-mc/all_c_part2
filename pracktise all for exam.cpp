#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char ch[100];
	printf("Enter a sentens:");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
	/*	if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
		{
			c++;
		}*/
		printf("%c %d\n",ch[i],i);
	}
	//printf("%d",c);
}
