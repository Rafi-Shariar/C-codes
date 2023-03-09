#include<stdio.h> //Write a C program to take one positive integer N as input and print all even numbers from 1 to N. 

int main (){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
        
    }
    





    return 0;
     
}