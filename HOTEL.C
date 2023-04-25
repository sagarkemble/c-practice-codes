#include<stdio.h>
void south_indian_dishes();
void maharastrian();
void desert();
void punjabi();
void Return_code();
void reorder();
void total();
int main()
{

   int  a;
printf("welcome to hotel\n");
printf("press 1 to give order\npress 2 to exit\n");
scanf("%d",&a);
if(a==1){
   int b;//for chosing sub category
   printf("what would you like to have\n");
   printf("1 for south indian \n2 for punjabi\n3 for maharastrian\n4 for deserts\n");
   scanf("%d",&b);
   if(b==1){south_indian_dishes();}
   else if(b==2){ punjabi(); }
   else if(b==3){maharastrian();}
   else if(b==4){desert();}
   else {printf("wrong data");}


   }

else if(a==2){printf("thankyou for visiting");}
else{printf("wrong data entered");}

return 0;
}
void south_indian_dishes(){
/*subdish*/int subdishes;
printf("choese your dish by pressing numbers\n");
printf("1 for dosa\n2 for idli\n3 for other dishes\n");
scanf("%d",& subdishes);
/*dosa*/if(subdishes==1)
{
   int dosa;
   int total ;
printf("1 for masala dosa rs 50\n2for paper dosa rs 50\n3 for uttappa 65 \n4 for onion uttappa 70\n");
scanf("%d",&dosa);
if (dosa==1){
printf("ordered");

}
else if (dosa==2){
printf("ordered");
}
else if (dosa==3){
printf("ordered");
}
else if (dosa==4){
printf("ordered");
}
Return_code();
}
/*idli*/else if (subdishes==2){
   int idli;
   printf("choese your dish by pressing numbers\n");
   printf("1 for idli sambar\n2 for masala idli\n3 for special idli sambar\n");
   scanf("%d",&idli);
 if(idli==1){
   printf("ordered\n");
 }
   else if(idli==2){
   printf("ordered\n");
 }
 else if(idli==3){
   printf("ordered\n");

 }  

 else {
   printf("wrong data entered\n");
 }
  Return_code();  
 }

else {
   printf("entered wrong data ");
}
 Return_code(); 
}
/**punjabi*/void punjabi(){
   int punjabi;
    printf("choese your dish by pressing numbers\n");
printf("1 for roti\n2 for vegetable\n3 for rice\n4 for other item\n");
scanf("%d",&punjabi);
if(punjabi==1){
 
   printf("ordered");
 }
   else if(punjabi==2){
   printf("ordered");
 }
 else if(punjabi==3){
   printf("ordered");
   
 }  
 else if (punjabi==4){
 printf("ordered");
 }


 else {
   printf("wrong data entered");
 }
  Return_code();
}
/*maharastrian*/void maharastrian(){
   
   int maharatrian;
    printf("choese your dish by pressing numbers\n");
printf("1 for bhakri bhaji\n2 for chapati bhaji\n3 for extra bhaji\n4 for rice varan\n");
scanf("%d",&maharatrian);
if(maharatrian==1){
   printf("ordered");
 }
   else if(maharatrian==2){
   printf("ordered");
 }
 else if(maharatrian==3){
   printf("ordered\n");
   Return_code();
 }
 else if(maharatrian==4){
   printf("ordered\n");
 }  
 else {
   printf("wrong data entered\n");
 }
   
   }
/*desert*/void desert(){
   
   int sweet;
    printf("choese your dish by pressing numbers\n");
printf("1 for gulabjamun\n2 for shrikhand\n3 for rasmalia\n4 for amrakhand\n");
scanf("%d",&sweet);
if(sweet==1){
   printf("ordered\n");
 }
   else if(sweet==2){
   printf("ordered\n");
 }
 else if(sweet==3){
   printf("ordered\n");
 
 }  
 else if (sweet==4){
 printf("ordered\n");
 }

 else {
   printf("wrong data entered");
 }
  Return_code(); 
   }
void Return_code(){
   int return_code;
   printf("want to order more\n");
   printf("1 to order more\n2 to exit order\n");
   scanf("%d",&return_code);
   if(return_code==1){
reorder();
   }
   else if(return_code==2){
      printf("your order will arive soon\n");
   }
else{
   printf("wrong number entered\n");
}
}
void reorder(){
   int a;
   printf("press 1 to add order\npress 2 to exit\n");
scanf("%d",&a);
if(a==1){
   int b;//for chosing sub category
   printf("what would you like to have\n");
   printf("1 for south indian \n2 for punjabi\n3 for maharastrian\n4 for deserts\n");
   scanf("%d",&b);
   if(b==1){south_indian_dishes();}
   else if(b==2){ }
   else if(b==3){maharastrian();}
   else if(b==4){desert();}
   else {printf("wrong data");}


   }
   else if(a==2){
      printf("your order will arrive soon");
   }
}