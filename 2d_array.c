#include <stdio.h>
int main(){
    //int matrix[2][3]={1,2,3},{4,5,6,};//
       int num[3][3];
       num[0][0]=1;
       num[0][1]=2;
       num[0][2]=3;
       num[1][0]=4;
       num[1][1]=5;
       num[1][2]=6;
       num[2][0]=7;
       num[2][1]=8;
       num[2][2]=9;
       int rows=sizeof(num)/sizeof(num[0]);
       int columns=sizeof(num[0])/sizeof(num[0][0]);
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d",num[i][j]);
        }
        printf("\n");
    }

}