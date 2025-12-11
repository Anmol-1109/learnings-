#include <stdio.h>
enum day{sun=1,mon=2,tue=3,wed=4,thu=5,fri=6,sat=7};
int main(){
/*printf("enter what day is today in no :");
int today;
scanf("%d",&today);
if(today==sun||today==sat){
    printf("holiday");
}
else{
    printf("go to work");*/
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
enum week day;
day = Wed;
printf("%d",day);
return 0;

}
