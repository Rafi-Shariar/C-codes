#include<stdio.h>
void sum_of_even();
int main(){

    int t;
    scanf("%d",&t);

    for (int i = 1; i <=t; i++)
    {
        sum_of_even();
    }
    


    return 0;
}

void sum_of_even(){

    int n; scanf("%d",&n);

    int x=(n-12)/4;

    for (int i = 1; i <= 4; i++)
    {
        printf("%d ",x);
        x+=2;
    }
    
}