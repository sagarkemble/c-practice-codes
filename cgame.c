#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    printf("-------welcome to c game --------\n\nenter any random and guess number in minimum gusses");
    int entered_value,random_number,guess,tries,a;
    int attempts=1;
    srand(time(0));
    random_number=rand()%100+1;
    // printf("%d",random_number);
//     printf("-------welcome to c game --------\n\npress 1 to play game \npress 2 to exit\n");
  
    
 do{
     scanf("%d",&entered_value);
     if(entered_value>random_number){
        printf("enter a lower number\n");
     }
     else if(entered_value<random_number){
        printf("enter a higher number\n");
     }
attempts++;
 }
while(entered_value!=random_number);
printf("you have gussed right number in %d attempts\n\n\n\nthank you for playing this game\n\n\n\na code by sagar kemble",attempts);
return 0;
   }




