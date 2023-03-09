#include<stdio.h> /*Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible 
by M. */

int main(){
    int n,m;
    printf("enter N :"); scanf("%d", &n);
    printf("Enter M :"); scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        if (i%m==0)
        {
            printf("%d ", i);
        }
        
    }
    


    return 0;
}
