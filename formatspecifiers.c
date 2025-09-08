#include <stdio.h>
main(){
    //format specifier//
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency ='$';
    char name[] = "anmol";
    printf("%d\n",age);
    printf("%f\n",price);
    printf("%lf\n",pi);
    printf("%c\n",currency);
    printf("%s\n",name);
    //width//
    int num1 = 1;
    int num2 = 10;
    int num3 = 1000;
    printf("%3d\n",num1);
    printf("%4d\n",num2);
    printf("%5d\n",num3);
    //presision//
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;
    printf("%.1f\n",price1);
    printf("%.3f\n",price2);
    printf("%.3f\n",price3);
}