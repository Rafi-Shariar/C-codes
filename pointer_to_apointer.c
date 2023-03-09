#include<stdio.h>
int main(){


    int a=5;

    int* p=&a;  printf("%p\n",p);

    int** q;  q=&p;

    printf("%d\n",**q);




    return 0;
}