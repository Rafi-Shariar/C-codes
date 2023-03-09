#include<stdio.h>
void sorting_acending(int arr[],int n);
void sorting_decending(int arr[],int n);
int main(){

   int N; scanf("%d",&N);
   int a[N];
   int b[N];

   for (int i = 0; i < N; i++)
   {
     scanf("%d",&a[i]);
   }

   for (int i = 0; i < N; i++)
   {
     scanf("%d",&b[i]);
   }

   sorting_acending(a,N);
   sorting_decending(b,N);

   for (int i = 0; i < N; i++)
   {
     int sum=0;
     sum=a[i]-b[i];

     printf("%d ",sum);
   }
   
   
   


    return 0;
}
void sorting_acending(int arr[],int n){
    int temp;

    for (int i = 0; i < (n-1); i++)
    {
        for (int j = 0; j <(n-1); j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    
    
}

void sorting_decending(int arr[],int n){

    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    
    
}