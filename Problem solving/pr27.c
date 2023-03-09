#include<stdio.h>
int main (){

    int n;
    scanf("%d", &n);

    int x=0;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            x++;
            break;
        }
        
    }
    if (x==0)
    {
        printf("Prime");
    }else
    {
        printf("Composite");
    }
    
    
    


    return 0;
}