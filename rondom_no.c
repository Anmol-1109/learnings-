#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(0));
int no1=(rand() %6) +1;
int no2=(rand() %6) +1;
int no3=(rand() %6) +1;

printf("%d\n",no1);
printf("%d\n",no2);
printf("%d\n",no3);
}