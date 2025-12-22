#include<stdio.h>
void count(FILE *ptr){
    rewind(ptr);
   int ccount=0;
   int wcount=0;
   int scount=0;
   char k= getc(ptr);


    while(k!=EOF){
        ccount++;
        if(k==' '||k=='\n')wcount++;
        if(k=='\n')scount++;
         k= getc(ptr);
          }
          wcount++;
          scount++;
printf("%d %d %d",ccount,wcount,scount);
}
int main(){
//     //char buffer[255];
//     // if(fgets(buffer,255,pf)==NULL){
//     //     printf("error: unable to open file");
//     // }
//     // while(fgets(buffer,255,pf)!=NULL){
//     //     printf("%s",buffer);
//     // }
//     FILE *pf= NULL;
//     pf=fopen("New Text Document.txt","r");
//     char str[] = "well this is a example on how to write in files";
//     char string[100];
//     fgets(string,98,pf);
    
//     //fscanf(pf,"%s",string);
//     printf("%s",string);
    
//     fclose(pf);}
FILE *ptr= NULL;
//     // ptr=fopen("New Text Document.txt","W");
//     // fprintf(ptr,"%s",str);
//     // fclose(ptr);
// //     FILE *ptr= NULL;
   ptr=fopen("New Text Document.txt","r");
// //     fprintf(ptr,"%s",str);
// //     fclose(ptr);
// // }
count(ptr);
fclose(ptr);}