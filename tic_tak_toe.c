#include<stdio.h>
#include<stdbool.h>

void printing(int arr[][4],int n);
int main(){

    int n=3;
    int arr[4][4];

    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= n; j++)
       {
         arr[i][j]=-1;
       }
       
    }
    

   
    printing(arr,n);

    bool player1=true;
    bool player2=false;

    while (true)
    {
        printing(arr,n);
        if (player1==true)
        {

            int r,c;
            flag:
            printf("turn Player 1 (X), please enter row and colunm :  ");
            scanf("%d %d",&r,&c);
            if (arr[r][c]!=-1)
            {
                printf("invalid input, try again!");
                goto flag;
            }
            arr[r][c]=1;

            player2=true;
            player1=false;
            
        }else
        {
            int r,c;
            flag2:
            printf("trun Player 2 (0), please enter row and colunm :  ");
            scanf("%d %d",&r,&c);
            if (arr[r][c]!=-1)
            {
                printf("invalid input, try again!");
                goto flag2;
            }
            arr[r][c]=2;

            player1=true;
            player2=false;
            
        }
        
        
    }
    

    return 0;
}

void printing(int arr[][4],int n){

     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            

            if (arr[i][j]==-1)
            {
                printf(" ",arr[i][j]);

            }else if (arr[i][j]==1)
            {
                printf("X",arr[i][j]);
            }
            else if (arr[i][j]==2)
            {
                printf("0",arr[i][j]);
            }
            
            
            

           if (j<n)
           {
             printf(" \t|\t");
           }
           
        }

        if (i<n)
        {
            printf("\n__________________________________\n");
        }
        

        printf("\n");
        
    }


}