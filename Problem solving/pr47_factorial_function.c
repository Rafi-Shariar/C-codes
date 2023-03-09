#include<stdio.h>
int factorial(int x);
int main(){

    int n;   scanf("%d",&n);

    int ans=factorial(n);

    printf("factorial is : %d",ans);
  

    return 0;
}

int factorial(int x){

    int sum=1;
    for (int i = 1; i <= x; i++)
    {
        sum *=i;
    }

    return sum;
    
}