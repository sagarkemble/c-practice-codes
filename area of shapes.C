#include<stdio.h>
void rect(float value_of_rect_s1,float value_of_rect_s2);
void square(float value_of_square);
void circle(float value_of_circle);
int main (){
    float value_of_square;
    float value_of_circle;
    float value_of_rect_s1;
    float value_of_rect_s2;
    int type;
    printf("enter 1 to calculate area of square\nenter 2 to calculate area of circle\nenter 3 to calculate area of rectangle \n");
    scanf("%d",&type);
     if(type==1){
        printf("enter side of square \n ");
        scanf("%f",&value_of_square);
      square(value_of_square);
    }
    else if(type==2){
        printf("enter radius of circle\n");
        scanf("%f",&value_of_circle);
        circle(value_of_circle);
    }
    else if(type==3){
        printf("enter first side\n");
        scanf("%f",&value_of_rect_s1);
        printf("enter second side\n");
        scanf("%f",&value_of_rect_s2);
        rect(value_of_rect_s1,value_of_rect_s2);
    }
   else {
         printf("enter a vailid number");
        }
   if(type==1){
        // void square(float value_of_square);   }

    return 0;

}
}
void square(float value_of_square){
    printf("area of square is :%f",value_of_square*value_of_square);
    
}
void circle(float value_of_circle){
    printf("area of circle is :%f",3.141592*value_of_circle*value_of_circle);
}
void rect(float value_of_rect_s1,float value_of_rect_s2){
    printf("area of rectangle is :%f", value_of_rect_s1* value_of_rect_s2);
}