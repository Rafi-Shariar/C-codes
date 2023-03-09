#include<stdio.h>

float median(int n,int ara[n]);
int main (){
 
    
    int temp;
    int n; scanf("%d",&n);
    int ara[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }
    
   //sorting
    for (int j = 1; j <= n; j++)
    {
             
    for (int i = 0; i < (n-1); i++)
    {
        if (ara[i]>ara[i+1])
        {
            temp = ara[i];
            ara[i]=ara[i+1];
            ara[i+1]=temp;
        }
       
    }
 
    }
 
   
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ara[i]);
    }

    printf("\n");

    float med = median(n,ara);

    printf("median is : %.2f",med);
   
    return 0;
}

float median(int n,int ara[n]){

    float median = 0;

    if (n%2==0)
    {
        median = (ara[(n-1)/2] +ara[n/2])/2.0;
    }else
    {
        median = ara[n/2];
    }

    return median;
    
    
}
