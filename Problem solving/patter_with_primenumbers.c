#include<stdio.h>
int main(){

    int n; scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
        printf("\n");
        for (int col = 1; col <= row; col++)
        {
           printf("%d",col);
            
            
        }
        
    }
    
}