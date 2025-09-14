#include <stdio.h>
enum day{sun=1,mon=2,tue=3,wed=4,thu=5,fri=6,sat=7};
int main(){
printf("enter what day is today :");
int today;
scanf("%d",&today);
if(today==1||today==7){
    printf("holiday");
}
else{
    printf("go to work");
}
}