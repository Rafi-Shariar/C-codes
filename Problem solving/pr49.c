#include<stdio.h>
int main(){

    int n; scanf("%d",&n);

    find(n);


    return 0;
}

void find(int n){

    int prime=0;



    for (int i = 2; i < n; i++)
    {
     if (n%i==0)
     {
        prime=1;
     }   
    }

    if (prime==0)
    {
        printf("Prime number");
    }else if (prime==1)
    {
        printf("Not a prime number");
    
    }
    
    
    
    
}