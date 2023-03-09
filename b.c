#include<stdio.h>
int GCD(int x,int y){

    for (int i = x; i >= 1; i--)
    {
        if (x%i==0 && y%i==0)
        {
            return i;
        }
        
    }
    return;
}

int main(){

   int t; scanf("%d",&t);
   int x,y;

   for (int k = 1; k <= t; k++)
   {
      int n; scanf("%d",&n);
      int arr[n];

      for (int a = 0; a < n; a++)
      {
         scanf("%d",&arr[a]);
      }

      int count=0;
      

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            if (j!=i)
            {
               x=arr[i];
               y=arr[j];

               int ans=GCD(x,y);


               if (ans==1)
               {
                  count++;
               }
               
            }
            
            
         }
         
         
      }

      printf("%d\n",count);
      
   }
   


   return 0;
}