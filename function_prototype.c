#include <stdio.h>
void hello(char[],int); // functio prototype//
int main(){
    char name[]="bro";
    int age=19;
    hello(name,age);
    return 0;

}
void hello (char name[],int age){
    printf("\nhello my name is %s",name);
    printf("\n my age is %d",age);
    return 0;
}