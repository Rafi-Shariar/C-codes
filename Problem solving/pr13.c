#include<stdio.h> //Write a C program to take one positive integer N as input and print all divisors of N.
int main (){

    int n;
    scanf("%d", &n);

    for (int i =1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d ", i);
        }
        
    }
    


    return 0;
}
