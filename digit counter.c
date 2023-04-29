#include<stdio.h>
int digit_counter(int);
int main()
{
int entered_number;
printf("enter a number to count the digits \n");
scanf("%d\n",entered_number);
digit_counter(entered_number);

return 0;
}
int digit_counter(int a){
    int b=0;
if (a>0)
{
b++;    
digit_counter(a%10);
return b;
}
else{
    return 0;
}
}