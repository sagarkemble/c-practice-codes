#include<stdio.h>
#include <string.h>
struct input
{
    char first_name[50];
    char last_name[50];
    };
int main()
{
    int a;
printf("enter how many name to be entered\n");
scanf("%d",&a);
struct input name[a];
for (int i = 0; i < a; i++)
{
    printf("enter first name %d \n",i+1);
    scanf("%s",&name[i].first_name);
     printf("enter last name %d\n",i+1);
    scanf("%s",name[i].last_name);

}
for (int i = 0; i < a; i++)
{
    strcat(name[i].first_name,name[i].last_name);
    printf("you entered %d name %s\n",i+1,name[i].first_name);
    // puts(name[i].first_name);
}


return 0;
}