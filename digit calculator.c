#include<stdio.h>
int digit_counter(int);
int main()
{
    int entered_value;
    int return_value;
printf("-----------enter a number to know the digits in number-----------\n");
scanf("%d",&entered_value);
return_value=digit_counter(entered_value);
printf("%d",return_value);
return 0;
}
int digit_counter(int a){
    static int return_to_main=0;
    if(a!=0){
return_to_main++;
digit_counter(a/10);
    }
    return return_to_main;
}