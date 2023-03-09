#include<stdio.h>
void prime(int n, int*p);
void avarage(int n, int*p);
int main(){

    int n; 
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int*p=&arr[0];

    prime(n,p);
    avarage(n,p);
    


    return 0;
}

void prime(int n, int*p){

    int count=0;


    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < *p; j++)
        {
            if (*p%j==0)
            {
                count+=1;
            }
            
        }
        
        p++;
    
    }

    printf("Prime numbers : %d",count);
    
}

void avarage(int n, int*p){

    float sum=0;
    int count=0;

    for (int i = 0; i < n; i++)
    {
        if (*p%2==0)
        {
            sum+=*p;
            count+=1;
        }
        p++;
    }

    float avg=(sum/count);

    printf("\nAverage of all positive integers: %.2f",avg);
    
}