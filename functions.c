#include <stdio.h>
     void myself(char name[], char city[], char hobby[]){
        printf("I am %s\n",name);
        printf("I come from %s\n",city);
        printf("my hobby is  %s\n",hobby);
     }
     double square(double x){
      return x*x;
     }
     int main(){
       /* myself();
        myself();
        myself();*/


        //example//
        /*char name[50]="";
        char city[50]="";
        char hobby[30]="";
        printf("enter your name ");
        scanf("%s",name);
        printf("enter your city ");
        scanf("%s",city);
        printf("enter your hobby ");
        scanf("%s",hobby);
        myself(name,city,hobby);*/
    
    double x =square(3.14);
    printf("%lf",x);
    return 0;

     }
    