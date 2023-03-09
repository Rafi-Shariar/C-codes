#include<stdio.h>//if the matrix is diagonal
int main (){
    int row,col;
    scanf("%d %d",&row,&col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",a[i][j]); //taking input of the elements
        }
        
    }
    if (row==col)//checking if the matrix is sqauar matrix
    { int ans=1;
        for (int i = 0; i < row; i++) // checking indexs
    {
        for (int j = 0; j < col; j++)
        {
           if (i==j) 
           {
            continue;
           }
           if (a[i][j]!=0)
           {
             ans=0;
           }
           
           
        }
        
    }
    if (ans==1)
    {
        printf("Diagonal\n");
    }
    else
    {
        printf("Not Diagonal \n");
    }
    
    

    }
    else
    {
        printf("not diagonal");
    }
    
    



    





    return 0;
}