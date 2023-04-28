#include<stdio.h>

int main()
{
    int array_number;
int a[100];

printf("enter the number to be stored in array");
scanf("%d",&array_number);
for (int  i = 0; i < array_number; i++)
{
       printf("enter the number to  be stored in %d block of array\n",i);
    scanf("%d\n",&a[i]);
}
for (int b = 0; b < array_number; b++)
{
//    int c=*b;
    printf("the number store in %d array is %d\n",b,a[b]);

}



return 0;
}