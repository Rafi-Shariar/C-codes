#include<stdio.h>

void counter(int n,int *p,int k);
int main(){

    int n; scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int k; scanf("%d",&k);


    counter(n,arr,k);


    return 0;
}

void counter(int n,int *p,int k){

    int count=0;

    for (int i = 0; i <n ; i++)
    {
       if (*p!=k)
       {
         count++;
        
       }
       p++;
             
    }

    printf("%d",count);
    
}