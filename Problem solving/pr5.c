#include<stdio.h>
//Write a C program to take one non-negative integer as input and check if it is even or odd.
int main (){

    int a;
    printf("enter a :"); scanf("%d", &a);
    

    if (a%2==0)
    {
        printf("Even");
    }else{
        printf("Odd \n");
    }
    


    return 0;
}