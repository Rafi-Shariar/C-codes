#include<stdio.h>
int main (){

    int n;
    scanf("%d", &n);

    int temp;
    temp=n;

    while (temp!=1)
    {
        if (temp%2==0)
        {
            temp=temp/2;
        }
        else
        {
            temp=temp-1;
        }

        printf("%d, ", temp);
        
        
    }
    

    return 0;
}