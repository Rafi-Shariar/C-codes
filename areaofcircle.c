#include<stdio.h>
int main (){
    
    int a;
    printf("enter the radius of circle :");
    scanf("%d", &a);

    float pi = 3.1416;

    float area = pi*a*a;
    printf("%f", area);
    return 0;
}