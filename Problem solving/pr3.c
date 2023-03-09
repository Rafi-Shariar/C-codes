#include<stdio.h>
//Write a C program to take three integers as input and show who is bigger. If they are equal print as it is.
int main (){

    int a,b,c;
    printf("enter a :"); scanf("%d", &a);
    printf("enter b :"); scanf("%d", &b);
    printf("enter c :"); scanf("%d", &c);

    if (a>b  && a>c)
    {
        printf("A is bigger");
    } else if( b>a && b>c){
        printf("B is bigger");

    }else if (c>a && c>b)
    {
        printf("C is bigger");
    }
    else if ( a=b=c)
    {
        printf("All are equal");
    }
    
    

    

    


    return 0;
}