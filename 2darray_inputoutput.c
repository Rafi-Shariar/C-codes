   #include<stdio.h>
   int main(){

    int row=4,col=3;
    int ara[row][col];

    for (int i = 0; i <= row-1; i++)
    {
        for (int j = 0; j <= col-1; j++)
        {
            scanf("%d",&ara[i][j]);
        }
        
        
    }
      for (int i = 0; i <= row-1; i++)
    {
        for (int j = 0; j <= col-1; j++)
        {
            printf("%d ",ara[i][j]);
        }
        
        printf("\n");
    }


    return 0;
   }