#include<stdio.h>
int main (){
    long long int n;
    scanf("%lld",&n);
   
   int rem,temp;
   int sum=0;

   temp=n;

   while (temp!=0)
   {
    rem=temp%10;
    sum =sum+rem;

    temp=temp/10;
   }
   printf("%d", sum);

return 0;
}
   

   

   
