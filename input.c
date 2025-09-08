#include <stdio.h>
int main(){
    int age;
    float gpa;
    char name[30];
    printf("enter your age ");
    scanf("%d",&age);
    printf("enter your gpa ");
    scanf("%f",&gpa);
    getchar();
    printf("enter your full name ");
    //scanf("%s",&name); only firdt name//
    //f gets also saves the enter key we use eter the data//
    fgets(name,sizeof(name),stdin);
    printf("your age is %d\n",age);
    printf("your gpa is %f\n",gpa);
    printf("your name is %s\n",name);
    



}