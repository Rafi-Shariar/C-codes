#include<stdio.h>
/*Write a C program to take three non-negative integers as input and tell if it forms a valid triangle. A valid triangle
is when sum of two sides are strictly greater than the third one. Print YES or NO. All sides must be valid (greater
than 0).*/
int main (){

    int a,b,c;
    printf("enter a :"); scanf("%d", &a);
    printf("enter b : "); scanf("%d", &b);
    printf("enter c :"); scanf("%d", &c);

    a!=0; b!=0; c!=0;

   if (a>b && c>b && a+c>b && a!=0 && b!=0 && c!=0)
   {
    printf("Yes");

   }else if (b>a && c>a && b+c>a && a!=0 && b!=0 && c!=0 )
   {
    printf("Yes");
   } else if (a>c && b>c && a+b>c && a!=0 && b!=0 && c!=0)
   {
    printf("Yes");
   }else{
    printf("No");
   }
   
   
   
    
    
    



 


    return 0;
}