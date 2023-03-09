#include<stdio.h>

int matching_sum(int n,int arr[]);
int main(){

    int n; scanf("%d",&n);

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int cal=matching_sum(n,arr);

    printf("%d",cal);

  

    return 0;
}

int matching_sum(int n,int arr[]){

     int sum=0;

    
    for (int i = 1; i <= n; i++)
    {
        if ( i%2!=0 && arr[i]%2!=0)
        {
             sum+=arr[i]+i;
        }
        else if ( i%2==0 && arr[i]%2==0)
        {
             sum+=arr[i]+i;
        }       
        
    }

    return sum;

    
    


}