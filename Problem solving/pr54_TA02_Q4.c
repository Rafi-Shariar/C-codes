#include<stdio.h>
int main(){

    int n,k; scanf("%d %d",&n,&k);

    int arr[n];

    int index=0;

    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            arr[index]=i;
            index++;
        }
        
    }

    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            arr[index]=i;
            index++;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("The %dth element in this sequence is %d",k,arr[k-1]);
    
    
    


    return 0;
}