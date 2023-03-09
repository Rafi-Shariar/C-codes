#include<stdio.h>
int main (){
    int a,b,c;
    printf("enter a :"); scanf("%d", &a);
    printf("enter b :"); scanf("%d", &b);
    printf("enter c :"); scanf("%d", &c);

    if ( a=b && a>c)
    {
        printf("A and B are bigger");
    }else if (a=c && c>b)
    {
        printf("A and C are bigger");
    }else if (b=c && b>a)
    {
        printf("B and C are bigger");
    }
    else{
        printf("invalid");
    }
    
    
    


    return 0;
}