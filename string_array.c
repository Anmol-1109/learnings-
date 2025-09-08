#include<stdio.h>
#include <string.h>
int main(){
    char cars[][10]={"bmw","audi","tesla"};
    strcpy(cars[1],"lambo");
    for(int i=0;i<sizeof(cars)/sizeof(cars[1]);i++){
        printf("%s ",cars[i]);
    }
}