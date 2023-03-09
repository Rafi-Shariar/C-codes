#include<stdio.h>
int main(){

    int ara[10]={12,34,45,13,1,36,13,39,54,14};

    int maxx = ara[0];
    for (int i = 0; i < 10; i++)
    {
        if (ara[i]>maxx)
        {
            maxx=ara[i];
        }
        
    }
    printf("maximum value : %d",maxx);
    
    


    return 0;
}