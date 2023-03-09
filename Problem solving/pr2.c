#include<stdio.h>
//Write a C program to take two integers as input and show who is bigger. If they are equal print as it is. See the
//sample input output for more clarification.
int main (){

    int a,b;
    printf("enter a : "); scanf("%d", &a);
    printf("enter b : "); scanf("%d", &b);

    if (a>b)
    {
        printf("A is bigger \n");
    }else if (a<b)
    {
        printf("B is bigger \n");
    }else{
        printf("a and b are are equal \n");
    }
    
    


    return 0;
}