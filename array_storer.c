#include<stdio.h>
int main()
{
int capacity;



printf("enter capacity of array\n");
scanf("%d",&capacity);
int array[capacity];
for (int i = 0; i < capacity; i++)
{
    printf("enter number to be entered in array block %d\n",i+1);
    scanf("%d",&array[i]);
    
}
for (int i = 0; i < capacity; i++)
{
   int *a=&array[i];
    printf("the value at block %d in array is %d and adress of block is %d\n",i+1,array[i],a);
}

return 0;
}
