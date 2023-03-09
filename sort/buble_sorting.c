#include<stdio.h>
int main(){

    int arr[]={12,5,65,2,10};

    int size=5; int temp;

    for (int i = 0; i < (size-1); i++)
    {
        for (int j = 0; j < (size-1); j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }

    printf("after sorting: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    


    return 0;
}