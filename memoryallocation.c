#include <stdio.h>
#include <stdlib.h>
int main(){
int * ptr;
//ptr=(int*)malloc(3*4);
ptr=(int*)calloc(3,4);
for(int i=0;i<3;i++){
    scanf("%d",&ptr[i]);
}
for(int i=0;i<3;i++){
    printf("%d\n",ptr[i]);
}

}