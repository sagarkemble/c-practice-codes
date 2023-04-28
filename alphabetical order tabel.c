/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char a;
   char b='a';
   int c;
   int d;
   char e='A';
    printf("enter a number\n");
    scanf("%c",&a);
   
   if(a>='a'&&a<='z'){
      c=a-b+1;
      for(int i=1;i<=10;i++){
         printf("%d \n",c*i);
      }
   }
    else if(a>='A'&&a<='Z'){
       c=a-e+1;
       for(int i=1;i<=10;i++){
         printf("%d \n",c*i);
      }
       
    }
   
   else{
      printf("not an alphabet");
   }

    return 0;
}
