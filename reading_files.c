#include<stdio.h>
int main(){
    FILE *pf=fopen("C:\\Users\\anmol_6t2hugb\\Desktop\\me.txt","r");
    char buffer[255];
    if(fgets(buffer,255,pf)==NULL){
        printf("error: unable to open file");
    }
    while(fgets(buffer,255,pf)!=NULL){
        printf("%s",buffer);
    }
    fclose(pf);
}
