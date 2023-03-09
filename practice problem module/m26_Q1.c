#include<stdio.h>
int main(){

    float x,y;
    scanf("%f %f",&x,&y);

    float* a=&x;
    float* b=&y;

    avarage(a,b);

    return 0;
}

void avarage(float*a,float*b){

    float avg;
    avg=(*a+*b)/2;

    printf("the avarage is : %.3f",avg);
}