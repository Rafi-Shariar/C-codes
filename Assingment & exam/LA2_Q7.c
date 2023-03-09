#include<stdio.h>
void swap(int*a,int*b);
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int q;
    scanf("%d",&q);

    int x,y;

    for (int i = 1; i <= q; i++)
    {
        scanf("%d %d",&x,&y);

        for (int j = 1; j <= n; j++)
        {
            int*a=&arr[x];
            int*b=&arr[y];

            swap(a,b);
        }
        
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ",arr[i]);
    }
     

    return 0;
}

void swap(int*a,int*b){
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;


}