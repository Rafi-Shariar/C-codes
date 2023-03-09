#include<stdio.h>
int main(){

    int t; scanf("%d",&t);

    for (int k = 1; k <= t; k++)
    {
        int start,end;
        scanf("%d %d",&start,&end);

        if (start==1)
        {
            printf("1 ");
        }
        

        if(start < 2) 
        start = 2;

        int i,j,isPrime;


    
    for(i=start; i<=end; i++)
    {
        
         isPrime = 1; 

        
        for(j=2; j<=i/2; j++)
        {
           
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

      
        if(isPrime==1)
        {
            printf("%d ", i);
        }
    }
        

        printf("\n");
        
    }
    


    return 0;
}