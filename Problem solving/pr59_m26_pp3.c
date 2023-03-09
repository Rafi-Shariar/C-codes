#include<stdio.h>
int main(){

    int ara[]={12,54,23,24,5,12,53};

    int n=7;
    int maxx,minn;

    find_maxmin(n,ara,&maxx,&minn);

    printf("max : %d & min: %d",maxx,minn);


    return 0;
}

void find_maxmin(int n,int ar[], int*p, int*q){

    *p = ar[0];
    *q = ar[0];

    for (int i = 0; i < n; i++)
    {
        if (ar[i]>*p)
        {
            *p = ar[i];
        }
        if (ar[i]<*q)
        {
            *q = ar[i];
        }
        
        
    }
    


}