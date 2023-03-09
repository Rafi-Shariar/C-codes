#include<stdio.h>
int div3(int n, int arr[]);
int div5(int n, int arr[]);
int both(int n, int arr[]);
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int ans= div3(n,arr);

    printf("%d",ans);


    return 0;
}

int div3(int n, int arr[]){

    int count=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]%3==0)
        {
            count+=1;
        }
        
    }

    int total=div5(n,arr);

    int divboth=both(n,arr);

    int x=(count+total)-divboth;

    if (x==0)
    {
        return -1;
    }else
    {
        return x;
    }
    
    
    
}

int div5(int n, int arr[]){

    int count=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]%5==0)
        {
            count+=1;
        }
        
    }

    return count;
    
}

int both(int n, int arr[]){

    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%3==0 && arr[i]%5==0)
        {
            count+=1;
        }
        
    }
     return count;
}