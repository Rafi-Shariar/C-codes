#include<stdio.h>
int main(){

    int t; scanf("%d",&t);
    int k;

    for (int i = 1; i <= t; i++)
    {
        scanf("%d",&k);

        if (k%3==0 || k/10==3)
        {
            for (int j = k; j <=( j%3!=0 && j/10!=3); j++)
            {
                printf("new value :%d\n",j);
                
            }
            
        }else
        {
            printf("value: %d\n",k);
        }   


    }
    


    return 0;
}