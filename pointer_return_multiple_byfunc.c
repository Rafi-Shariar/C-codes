#include<stdio.h>
int main(){

    int a,b;
    scanf("%d %d",&a,&b);

    int large,small;

    swap(a,b,&large,&small);

    printf("large:%d & small:%d",large,small);

    return 0;
}

void swap(int x, int y, int*p, int*q){

    if (x>y)
    {
        *p=x;
        *q=y;
    }else
    {
        *p=y;
        *q=x;
    }
    
    
}