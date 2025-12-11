#include<stdio.h>
#include <string.h>
int main(){
    char cars[][10]={"bmw","audi","tesla"};
    strcpy(cars[1],"lambo");
    for(int i=0;i<sizeof(cars)/sizeof(cars[1]);i++){
        printf("%s\n",cars[i]);
        
}
char str[]="anmol sharma";
for (int i=0;i<strlen(str);i++){
 printf("%c",str[i]);
}
printf("%d",strlen(str));
           }