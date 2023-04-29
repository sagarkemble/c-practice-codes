#include<stdio.h>
int factorial(int);
int main()
{
    int enteredv;
    int a;
printf("enter a number to find factorial of number\n");
scanf("%d",&enteredv);


printf("%d", factorial(enteredv));
return 0;
}
int factorial(int a){

if (a==1)
{
    return 1;
}
else{

    
    return(a * factorial(a-1)) ;
}

}