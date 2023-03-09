#include<stdio.h>
int main(){

    int n; scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    sum(n,arr);
    


    return 0;
}

void sum(int n,int arr[]){

    int sum=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]%10==0)
        {
            sum+=arr[i];
        }
        
    }

    printf("%d",sum);
    
}