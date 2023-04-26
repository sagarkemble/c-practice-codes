#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int entered; 
    int attempts;
    srand(time(0));
    int random =rand()%100+1;
    printf("%d",random);
    printf("welcome to cgame");
    do{
        
        scanf("%d",entered);
        if(entered>random){
            printf("enter a lower number");
          
            }
              else if(entered<rand){
                printf("enter a hugher number");
        }

        attempts++;
    }
    
while (entered==random);
 printf("you have completed game in %d attempts",attempts);
    
}

