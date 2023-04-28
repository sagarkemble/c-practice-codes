#include<stdio.h>
int number (int);
int main()
{
    int n;
printf("enter a number to print sum of n number\n ");
scanf("%d",&n);
printf("%d",number(n));
return 0;
} 
int number(int a){
    int i;
    int total;
    if(a==1){
return (1); 

    }
    else {
 total = a + number(a - 1);
    }
    return total;
}