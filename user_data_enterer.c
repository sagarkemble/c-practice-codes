#include<stdio.h>
#include <string.h>
int main()
{
    char name[50];
    char last_name[50];
    int roll_no;
    int std;
int date_of_birth;
int month_of_birth;
int year_of_birth;
strcat(name,last_name);
printf("enter your data\n");
printf("enter your first name\n");
fgets(name,50,stdin);
printf("enter your last name\n");
fgets(last_name,50,stdin);
printf("enter your roll no\n");
scanf("%d",&roll_no);
printf("enter your class\n");
scanf("%d",&std);
printf("enter your date of birth\n");
printf("enter your date\n");
scanf("%d",&date_of_birth);
printf("enter your month of birth\n",month_of_birth);
scanf("%d",&month_of_birth);
printf("enter your year of birth\n",month_of_birth);
scanf("%d",&year_of_birth);
printf("my name is\n%s my date of birth is %d/%d/%d\nI am studying in %d\nand my roll no is %d\n",name,date_of_birth,month_of_birth,year_of_birth,std,roll_no);
return 0;
}