#include<stdio.h>
int sum(int n);
int main(){

    int n;scanf("%d",&n);

    int count=sum(n);

    printf("%d",count);

    return 0;
}

int sum(int n){

   while (n>0)
   {
    return (n+sum(n-1));
   }
   
}