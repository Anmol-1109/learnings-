#include <stdio.h>
int main(){
    /*FILE *pf=fopen("test.txt","a");
    fprintf(pf,"\nI am 19 years old");

    fclose(pf);*/
    if (remove("test.txt")==0){
        printf("file deleted");
    }
    else{
        printf("error");
    }
}