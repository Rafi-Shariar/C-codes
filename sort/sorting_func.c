#include<stdio.h>
void sort(int n,int arr[]);
int main(){

    int size; scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    sort( size,arr);
    


    return 0;
}
void sort(int n,int arr[]){

    int temp;

    for (int i = 0; i < (n-1); i++)
    {
        for (int j = 0; j < (n-1); j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }

    printf("sorted : \n");

   for (int i = 0; i < n; i++)
   {
     printf("%d ",arr[i]);
   }
   
    
    



}