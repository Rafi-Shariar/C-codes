#include<stdio.h> //Write a C program to take one integer N as input and print from 1 to N. 

int main (){

    int n;
    scanf("%d", &n);

    if (n>0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        
    }else if (n<0)
    {
        for (int i = 1; i >= n; i--)
        {
            printf("%d ", i);
        }
        
    }
    
    
    

    

    return 0;
}
