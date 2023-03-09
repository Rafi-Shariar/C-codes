#include<stdio.h>
void area(float n);
int main(){

    float R; scanf("%f",&R);

    area(R);

    return 0;
}

void area(float n){

    
    float arsq= 3.1416*(n*n);

    printf("area of the circle is : %f",arsq);


}