#include <stdio.h>
#include <string.h>
int main(){
/*char name[25];
while(strlen(name)==0){
printf("whats your name ");
fgets(name,25,stdin);
name[strlen(name)-1]='\0';
if(strlen(name)==0){

    printf("enter a name\n");}
}
printf("hello");*/


     //do while loop//
     int num=0;
     int sum=0;
     do{
        printf("enter a no. ");
        scanf("%d",&num);
        sum = sum+ num;
     }while(num>0);
     printf("the entered no is less than or equal to 0\n");
     printf("total sum is %d",sum);

}