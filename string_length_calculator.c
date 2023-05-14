#include<stdio.h>
int length_calculator(char[]);

int main()
{
    char name[100];
printf("enter a string to calculate length\n");
fgets(name,100,stdin);
printf("length of string is %d",length_calculator(name));
return 0;
}
int length_calculator(char name[]){
int a=0;
for (int i = 0; name[i]!='\0'; i++)
{
   a++;
}
return a-1;



}