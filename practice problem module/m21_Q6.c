#include<stdio.h>
void devisor(int n);
int main(){

    int n; scanf("%d",&n);

    devisor(n);


    return 0;
}
void devisor(int n){

    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d ",i);
        }
        
    }
    
}