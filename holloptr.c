#include<stdio.h>
int main (){

    int n; scanf("%d", &n);

//for 1st line
    for (int i = 1; i <=n ; i++)
    {
        printf("#");
    }
    printf("\n");

    // for the middle part

    for (int i = 1; i <=(n-2); i++)
    {
       printf("#");
        for (int j = 1; j <= (n-2); j++)
        {
            printf(" ");
        }
        printf("# \n");
        
      
    }
    //for last line
    for (int i = 1; i <= n; i++)
    {
        printf("#");
    }
    printf("\n");
    
  
    
    


    return 0;
}