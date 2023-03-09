#include<stdio.h>
int main(){

    int n;scanf("%d",&n);

    rec(n);


    return 0;
}

void rec(int n ){

    if (n==0)
    {
        return;
    }
   
   printf("%d ",n);
   rec(n-1);
   
    
}