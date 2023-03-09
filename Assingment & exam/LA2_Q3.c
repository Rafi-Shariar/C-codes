#include<stdio.h>
int main(){

    int x; 
    scanf("%d",&x);
    int y; 
    scanf("%d",&y);

    int* ptrX=&x;
    int* ptrY=&y;

    printf("%d %d",*ptrX, *ptrY);


    return 0;
}