#include <stdio.h>
int main(){
    double prices[]={10,23,80,50,4};
    prices[5]=7;
    prices[3]=90;
    double k=prices[5];
    printf("%lf\n",k);
    printf("%lf\n",prices[3]);
   /* for(int i=0;i<=5;i++){
    printf("$%.1lf\n",prices[i])};*/
    for(int i=0;i<sizeof(prices)/8;i++){
    printf("$%.1lf\n",prices[i]);}
}

