#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char st[' '],v;
int n,m,i,j;
printf("Enter the name:");

//get the string
gets(st);

//show the string before palidrom
puts(st);

//get the string length
n=strlen(st);
printf("%d",n);
//devide the string length two part
m=n/2;

//this is the main part of the palidrom
for(j=n-1,i=0;j>=m;j--,i++)
{
v=st[j];
st[j]=st[i];
st[i]=v;
}

//show the optput
puts(st);

return(0);
}               
