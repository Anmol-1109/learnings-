#include <stdio.h>
#include <math.h>
int main(){
float x = 0;
printf("enter no.: ");
scanf("%f",&x);
x=sqrt(x);
printf("\nroot = %f\n",x);
x= pow(x,4);
printf("power 2 is %f\n",x);
x=sqrt(x);
float t= x+0.1;
t=ceil(t);
printf("next int is %f\n",t);
float h = log(x);
printf("lnx =%f",h);

}