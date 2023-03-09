#include<stdio.h>
int main(){

    int a[3][3];
    
    int sumd1=0,sumd2=0, sumr=0, sumc=0; 
    

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i==j)
            {
                sumd1=sumd1+a[i][j];
            }
            else if (i+j==4)
            {
                sumd2=sumd2+a[i][j];
            }
            
            
        }
        
    }
    if (sumd1!=sumd2)
    {
        printf("No\n");
    }
    else if (sumd1==sumd2)
    {
        for (int i = 1; i <= 3; i++)
        {
            sumc=0;
            sumr=0;
            for (int j = 1; j <= 3; j++)
            {
                sumc=sumc+a[i][j];
                sumr=sumr+a[i][j];
            }
            
            if (sumc!=sumd1)
            {
                printf("No\n");
            }
            else if (sumr!=sumd1)
            {
                printf("No\n");
            }
            else
            {
                 printf("Yes");
            }
            
           
            
            
            
        }
       
    }
    
    
    
    


    return 0;
}