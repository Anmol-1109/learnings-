#include<stdio.h>
int main(){
    //char buffer[255];
    // if(fgets(buffer,255,pf)==NULL){
    //     printf("error: unable to open file");
    // }
    // while(fgets(buffer,255,pf)!=NULL){
    //     printf("%s",buffer);
    // }
    FILE *pf= NULL;
    pf=fopen("New Text Document.txt","r");
    char str[] = "well this is a example on how to write in files";
    char string[100];
    
    fscanf(pf,"%s",string);
    printf("%s",string);
    
    // fclose(pf);
    // FILE *ptr= NULL;
    // ptr=fopen("New Text Document.txt","W");
    // fprintf(ptr,"%s",str);
    // fclose(ptr);
    FILE *ptr= NULL;
    ptr=fopen("New Text Document.txt","a");
    fprintf(ptr,"%s",str);
    fclose(ptr);
}
