#include<stdio.h>
int sum(int arr[],int n);
int main(){
    int n; scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int ans=sum(arr,n);

    printf("%d",ans);
    


    return 0;
}

int sum(int arr[],int n){


    int s;
    if (n==0)
    {
        return 0;
    }
    
    s=sum(arr+1,n-1); 
    return s+arr[0];
}