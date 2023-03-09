#include<stdio.h>

void largest(int n, int *arr, int k);
void smallest(int n, int *arr, int k);
int main(){
    int n; scanf("%d",&n);

    int ara[n],temp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }
    // sorting

     for (int j = 1; j <= 5; j++)
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

    printf("kth value :");
 
   
    /*for (int i = 0; i < n; i++)
    {
        printf("%d ",ara[i]);
    } */

    int k; scanf("%d",&k);

    largest(n,ara,k);
    smallest(n,ara,k);


    return 0;
}

void smallest(int n, int *arr, int k){

    for (int i = 1; i < k; i++)
    {
        *arr++;
    }

    printf("\n4th Smallest element :%d",*arr);
    
}


void largest(int n, int *arr, int k){

    for (int i = n; i >= k; i--)
    {
        *arr++;
    }

    printf("\n4th largest element :%d",*arr);
    
}
