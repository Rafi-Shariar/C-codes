#include<stdio.h>
void swap(int*p,int*q);
int main(){

    int size; scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    // sorting
    
    for (int i = 0; i < (size-1); i++)
    {
        for (int j = 0; j < (size-1); j++)
        {
            int*p=&arr[j];
            int*q=&arr[j+1];
            swap(p,q);
        }
        
    }
    
    //prining

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;

}

void swap(int*p,int*q){

    int temp;

    if (*p>*q)
    {
        temp=*p;
        *p=*q;
        *q=temp;
    }



}