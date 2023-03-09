#include<stdio.h>
int main(){

    int a,b,c;

    int*x=&a;
    int*y=&b;
    int*z=&c;

    scanf("%d %d %d",&*x,&*y,&*z);

    int sum = (*x + *y +*z );

    printf("%d",sum);


    return 0;
}