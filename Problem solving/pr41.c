#include<stdio.h>// devide them
int main(){

    int n,k;
    scanf("%d", &n);
    int roll[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&roll[i]);
    }
    scanf("%d",&k);
    if (k==0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ",roll[i]);
        }
        
    }
    else
    {
        for (int i = k; i < n; i++)
        {
            printf("%d ",roll[i]);
        }

        for (int i = 0; i < k; i++)
        {
            printf("%d ",roll[i]);
        }
        
        
    }
    
    
    


    return 0;
}