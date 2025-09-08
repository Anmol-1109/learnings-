#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    int age = 0;
     printf("enter your age ");
     scanf("%d",&age); 
     if (age>=70){
        printf("you are a senior/n");
     }
     else if(age >=18){
        printf("you are an adult\n");
     }
     else if(age>=12){
        printf("you are teenager\n");
     }
     else if (age==0){
        printf("you are a newborn\n");
     }
        else{
            printf("you are a kid\n");
     }
     bool isstudent = 0;
     printf("type 1 if you are a student ");
     scanf("%d",&isstudent);
     if(isstudent){
        printf("you are a student");
     }
     else{
        printf("you are not a student");
     }
     char name[50]= "";
     printf("\nenter your name ");
     scanf("%*c");// way to remove the input buffer//
     
     fgets(name, sizeof(name), stdin);
     if (strlen(name) > 0 && name[strlen(name) - 1] == '\n') {
     name[strlen(name) - 1] = '\0';
     }
     
     if(strlen(name)==0){
     printf("\nplease enter a name");
     }
     else{
     printf ("\nyour name is %s",name);
     }
     
}
