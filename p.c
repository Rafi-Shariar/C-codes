#include<stdio.h>
int sum(float arr[],int n);
int main(){

   int n; printf("number of values:\n"); scanf("%d",&n);
   printf("enter values:\n");
   

   float arr[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%f",&arr[i]);
   }

int *p=&arr;

   char s[10];
   printf("enter function: ");
   scanf("%s",&s);



   if (s=='+')
   {
      float ans=sum(p,n);
      printf("Answer : %.2f\n",ans);
   }
   
   


   return 0;
}

int sum(float &arr[],int n){

   float sumation=0;

   for (int i = 0; i < n; i++)
   {
      sumation+=arr[i];
   }

   return sumation;
   


}