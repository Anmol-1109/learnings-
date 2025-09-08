#include <stdio.h>
int main(){
    // arithmetic operators = + / * % ++ --//
     int x = 2;
     int y = 3;
     float a = 2;
     float b = 3;
     int z = x+y;
     int c= x-y;
     int v = x*y;
     int u = x/y;
     float k = x/y;
     float g = a/b;
     
     printf("%d\n",z);
     printf("%d\n",c);
     printf("%d\n",v);
     printf("%d\n",u);
     printf("%f\n",k);
     printf("%f\n",g);
     //modulus//
     int an = 10;
     int gg = 6;
     int hh = an % gg;
     printf("%d\n",hh);
     //increment//
     int tt = 10;
     tt++;
     printf("%d\n",tt);
     //decrement//
     tt--;
     printf("%d\n",tt);
     //reassignment//
     x=x+2;
     printf("%d\n",x);
     x+=2;
     printf("%d\n",x);
     x-=2;
     printf("%d\n",x);
     x*=4;
     printf("%d\n",x);
     x/=4;
     printf("%d\n",x);

}