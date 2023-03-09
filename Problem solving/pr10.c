#include<stdio.h>//Write a C program to take one positive integer N as input and print from 1 to N. 
int main (){

    int n;
    printf("Enter a value :"); scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    


    return 0;
}