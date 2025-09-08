# include <stdio.h>
int main(){
    int rows;
    int columns;
    char sym;
    printf("enter no of columns ");
    scanf("%d",&columns);
    printf("enter no of rows ");
    scanf("%d",&rows);
    printf("enter the symbol ");
    scanf("%*d");
    scanf("%c",&sym);
    for(int i =1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
        printf(" %c",sym);}
        printf("\n");
    }
}