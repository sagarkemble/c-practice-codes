#include<stdio.h>
#include<math.h>
/*expexcted input enter a for 2 tabel
                         b for 3 tabel
                          c for 4 tabel
                          d for 5 tabel
*/               
int main (){
char a;
int i;
// char b;
// char c;
// char d;
// char e;

printf("enter a for 2 tabel\nenter b for 3 tabel\nenter c for 4 tabel\nenter d for 5 tabel\n");
scanf("%c",&a);
if((a>='A'&&a<='Z')||(a>='a'&&a<='z')){
    
   if(a=='a'||a=='A'){
      a=1;
   }
      else if (a=='b'||a=='B'){
          a=2;
      }
      else if(a=='c'||a=='C'){
          a=3;
      }
      else if(a=='d'||a=='D'){
          a=4;
      }
   }

else{printf("not an alphabet");}

switch(a){
    case 1 :for(i=1;i<=10;i++){
    printf("%d\n",i*2);
    
}
case 2 :for(i=1;i<=10;i++){
    printf("%d\n",i*3);
    
}
case 3 :for(i=1;i<=10;i++){
    printf("%d\n",i*4);
    
}
case 4 :for(i=1;i<=10;i++){
    printf("%d\n",i*5);
    
}
}








///loop
// for(i=0;i<=a;i++){
//     printf("%d\n",i);
    
// }



return 0;
}