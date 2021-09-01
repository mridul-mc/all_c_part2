#include<stdio.h>
#include<conio.h>
struct student
{
	char name[30];
	int cls;
	int rol;
	char sec;
};
int main()
{
	struct student st1,st2,st3;
	printf("Enter 1st student Details:-\n");
	printf("Enter 1st student name:");
	scanf("%s",&st1.name);
	printf("Enter 1st student class:");
	scanf("%d",&st1.cls);
	printf("Enter 1st student roll:");
	scanf("%d",&st1.rol);
	printf("Enter 1st student Section:");
	scanf("%s",&st1.sec);
	
	printf("\nEnter 2st student Details:-\n");
	printf("Enter 2nd student name:");
	scanf("%s",&st2.name);
	printf("Enter 2nd student class:");
	scanf("%d",&st2.cls);
	printf("Enter 2nd student roll:");
	scanf("%d",&st2.rol);
	printf("Enter 2nd student Section:");
	scanf("%s",&st2.sec);
	
	printf("\nEnter 3st student Details:-\n");
	printf("Enter 3rd student name:");
	scanf("%s",&st3.name);
	printf("Enter 3rd student class:");
	scanf("%d",&st3.cls);
	printf("Enter 3rd student roll:");
	scanf("%d",&st3.rol);
	printf("Enter 3rd student Section:");
	scanf("%s",&st3.sec);
	
	printf("\nYour entire data is:-\n\n");
	printf("student 1:--\nName:%s\nclass:%d\nroll:%d\nsection:%c",st1.name,st1.cls,st1.rol,st1.sec);
	printf("\n\nstudent 2:--\nName:%s\nclass:%d\nroll:%d\nsection:%c",st2.name,st2.cls,st2.rol,st2.sec);
	printf("\n\nstudent 3:--\nName:%s\nclass:%d\nroll:%d\nsection:%c",st3.name,st3.cls,st3.rol,st3.sec);
}
