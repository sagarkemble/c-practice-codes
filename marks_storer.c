#include<stdio.h>

int main()
{
int number_of_students;
int number_of_subjects;
int a;
printf("welcome to marks storer\n");
printf("enter number of students\n ");
scanf("%d",&number_of_students);
printf("enter number of subjects\n");
scanf("%d",&number_of_subjects);
int array[number_of_students][number_of_subjects];
for (int i = 0; i < number_of_students; i++)
{
    for (int j = 0; j < number_of_subjects ; j++)
    {
     printf("enter the marks of roll number %d in subjects %d\n",i+1,j+1);
     scanf("%d",&array[i][j]);
    }
    
}
printf("1 for individual marks of students \n2 for all marks of all students\n ");
scanf("%d",&a);
if (a==1)
{
    int roll_no;

    printf("enter the roll number of student\n");
scanf("%d",&roll_no);
for (int i = 0; i < number_of_subjects; i++)
{
    printf("the marks of roll no %d in subject %d is %d\n",roll_no,i+1,array[roll_no][i]);
}

}
if (a==2){
    for (int i = 0; i < number_of_students; i++)
{
    for (int j = 0; j < number_of_subjects ; j++)
    {
     printf("marks of student in subjects %d is %d\n",i+1,array[i][j]);
     
    }
}
}

return 0;
}
