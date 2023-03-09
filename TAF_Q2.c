#include<stdio.h>
int main(){

    int term; scanf("%d",&term);

    printf("0, 1,");

    int a=0,b=1,c;

    for (int i = 2; i < term; i++)
    {
        c=a+b;
        printf(" %d,",c);

        a=b;
        b=c;

        
    }
    

    


    return 0;
}