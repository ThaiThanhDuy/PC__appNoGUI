#include <stdio.h>


int i=0;
void main(){
    int x= 10;
    int y =20;
    int *px = &x;
   
    *px=20;
    printf("%p\n",px);
    printf("%p\n",&x);
    printf("%p\n",*px);
    printf("%p\n",x);
    printf("%p\n",&y);
    printf("%p",y);

} 