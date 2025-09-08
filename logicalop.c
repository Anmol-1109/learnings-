#include <stdio.h>
#include <stdbool.h>
main(){
    //and//
/*float t=0;
bool sunny=1;
printf("enter temp ");
scanf("%f",&t);
printf("\nenter 1 if sunny 0 if not ");
scanf("%d",&sunny);
if(t>=0&&t<30&&sunny){
printf("temp is good");
}
else{
    printf("nothing");
}*/




    //or//
/*float t=0;
printf("enter temp ");
scanf("%f",&t);
if(t<=0||t>30){
printf("temp is bad");
}
else{
    printf("temp is good");
}*/
   //not//
bool sunny= false;
if(!sunny){
    printf("its cloudy");
}
else{
    printf("its sunny");
}

}