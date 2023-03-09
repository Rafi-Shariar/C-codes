#include<stdio.h>
// is it possible to distribute the Weight to two even numbers
int main (){

    int w;
    printf("enter weight of water melon :"); scanf("%d", &w);

    if (w%2==0 && w!=2)
    {
        printf("Possible \n");
    }else{
        printf("Not possible \n");
    }
    


    return 0;
}