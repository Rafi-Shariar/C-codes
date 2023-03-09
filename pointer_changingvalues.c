#include<stdio.h>
int main(){

    int a=5;

    int* p;  p=&a;

    int* q=p;

    *q=13;

    printf("%d",a);


    return 0;
}