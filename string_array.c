#include<stdio.h>
#include <string.h>
int main(){
    char cars[][10]={"bmw","audi","tesla"};
    strcpy(cars[1],"lambo");
    for(int i=0;i<sizeof(cars)/sizeof(cars[1]);i++){
        printf("%s\n",cars[i]);
        
}
char str[]="anmol sharma";
char string[45];
for (int i=0;i<strlen(str);i++){
 printf("%c",str[i]);
}
printf("\n%s",str);
//printf("%d",strlen(str));
printf("\nenter the name ");
scanf("%[^\n]s",string);
scanf("%*c");
printf("the name is %s",string);
printf("\nenter the name ");
fgets(string,45,stdin);
printf("the name is %s",string);

           }