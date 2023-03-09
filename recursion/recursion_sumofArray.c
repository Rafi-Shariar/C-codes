#include<stdio.h>
int sum(int arr[],int i,int n);
int main(){

    int n; scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int ans=sum(arr,0,n);

    printf("%d",ans);
    


    return 0;
}

int sum(int arr[],int i,int n){

    int s;
    if (i==n)
    {
        return 0;
    }
    
    s=sum(arr,i+1,n);
    return s+arr[i];
}
