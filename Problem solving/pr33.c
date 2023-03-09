#include<stdio.h> // find the 3rd largest value;
int main(){

    int n; scanf("%d", &n);
    int input[n];

    int i,j;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    int largest=input[0];
    for ( i = 1; i < n; i++)
    {
        if (input[i]>largest)
        {
            largest=input[i];
        }
        
    }

    int ara[largest+1];

    for ( i = 0; i <=largest ; i++)
    {
        ara[i]=0;
    }

    for ( i = 0; i < n; i++)
    {
        ara[input[i]]+=1;
    }

    int count=0;

    for ( i = largest; i>= 1; i)
    {
       if (ara[i]==1)
       {
        count+=1;
       }
       if (count==3)
       {
        printf("The third largest value is %d\n", i);
        break;
       }
       
        
    }

    return 0;
}