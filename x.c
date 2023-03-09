#include<stdio.h>

int main(){

   int n; printf("number of values:\n"); scanf("%d",&n);
   printf("enter values:\n");
   

   float arr[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%f",&arr[i]);
   }



   char c;
   printf("enter function: ");
   scanf("%c",&c);



   if (("%c",c)=='+')
   {
     float sum=0;

     for (int i = 0; i < n; i++)
     {
       sum+=arr[i];
     }

     printf("Answer : %.2f",sum);
     
   }
   else if (("%c",c)=='-')
   {
      float ans=0;

      for (int i = 0; i < n; i++)
      {
        ans-=arr[i];
      }

      printf("Answer : %.2f",ans);
      
   }
   
   
   


   return 0;
}


   


