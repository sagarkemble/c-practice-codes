#include<stdio.h>
void south_indian_dishes();
int main()
{

   int  a;
printf("welcome to hotel\n");
printf("press 1 to give order\npress 2 to exit\n");
scanf("%d",&a);
if(a==1){
   int b;//for chosing sub category
   printf("what would you like to have\n");
   printf("1 for south indian \n2 for punjabi\n3 for maharastrian\n3 for deserts\n");
   scanf("%d",&b);
   if(b==1){south_indian_dishes();}
   else if(b==2){}
   else if(b==3){}
   else {printf("wrong data");}


   }

else if(a==2){printf("thankyou for visiting");}

return 0;
}
void south_indian_dishes(){
   int subdishes;
printf("choese your dish by pressing numbers\n");
printf("1 for dosa\n2 for idli\n3 for other dishes");
scanf("%d,subdishes");
if (subdishes==1){}
else if (subdishes==2){
   printf("hi");
}
else if (subdishes==3){printf("hello");}
else {
   printf("entered wrong data ");
}
}
