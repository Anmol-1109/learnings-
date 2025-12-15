#include<stdio.h>
int main(){
    FILE *pf= NULL;
    pf=fopen("New Text Document.txt","r");
    char buffer[255];
    if(fgets(buffer,255,pf)==NULL){
        printf("error: unable to open file");
    }
    while(fgets(buffer,255,pf)!=NULL){
        printf("%s",buffer);
    }
    fclose(pf);
}
