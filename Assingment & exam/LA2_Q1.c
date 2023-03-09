#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int sum=0;
    int numb=1;

    for (int i = 1; i <= n; i++)
    {
       
        
        if (numb<=3)
        {
            sum+=i;
        }
        else if (numb>3 && numb<=6)
        {
            sum -=i;
        }
          if (numb>6)
        {
            numb=1;
        }
       
        numb+=1;
        
    }

    printf("%d",sum);
    



    return 0;
}