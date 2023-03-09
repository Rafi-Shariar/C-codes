#include<stdio.h>
void serial(int n);
int main(){

    int n; scanf("%d",&n);

    serial(n);


    return 0;
}

void serial(int n){

    if (n>0)
    {
      for (int i = n; i >= (-n); i--)
      {
        printf("%d ",i);
      }
         
    }else if (n<0)
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ",i);
        }
        
        int k=n*(-1);

     for (int i = 1; i <= k; i++)
     {
        printf("%d ",i);
     }
    }
    
    


}