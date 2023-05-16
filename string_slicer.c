#include<stdio.h>
void slicer(char[],int,int);
int main()
{
    int c;
char input[100];
int a,b;
printf("---------------welcome to word slicer---------------\n");
printf("press 1 to know what is word slicer\npress 2 to slice word\n");
scanf("%d",& c);
if (c==2)
{
  

printf("----------enter a word to be sliced-------------- \n");

scanf("%s",input);
// fgets(input,500,stdin);

printf("\n");
for (int i = 0; input[i] != '\0'; i++)
{
    printf("|%c|",input[i]);
}

printf("\n");
for (int i = 0; input[i] != '\0'; i++)
{
    printf("|%d|",i+1);
}
printf("\n");


printf("enter the start of slice of word according to index like sagar a is 2 and r is 4\n");
scanf("%d",&a);
printf("enter the end of slice od word according to index like sagar a is 2 and r is 4\n");
scanf("%d",&b);



slicer(input,a-1,b);
}
else if (c==1)
{
   printf("'WORD SLICER'IS A PROGRAM WHICH SLICE OR CUTS THE WORD\n");
   printf("like if you enter sagar and tell to slice it according to your input\nyou told to slice from a to r \n");
   printf("it print agar\n");
}
else{printf("wrong data entered\n");}

return 0;

}
void slicer(char input[],int a,int b){
for (int i = a-1; i <= b; i++)
{
    printf("%c",input[i]);
}
printf("\n-----------A CODE BY SAGAR----------");
}