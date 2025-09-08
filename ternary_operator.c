#include <stdio.h>
/*int findmax(int x,int y){
    if(x>y){
        return x;
     }
     else{
        return y;
     }}
     int main(){
 int t=findmax(2,3);
 printf("%d",t);
    }*/
int findmax(int x,int y ){
    return(x>y)? x:y;}
    int main(){
        int t= findmax(2,3);
        printf("%d",t);

    }  
