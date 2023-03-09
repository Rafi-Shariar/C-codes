#include<stdio.h>

int NCR(int x,int y);
int NCR(int x,int y);
int factorial(int x);

int main(){

    int n,r;
    scanf("%d %d",&n,&r);

    int npr=NPR(n,r);
    printf("nPr is : %d\n",npr);

    int ncr=NCR(n,r);
    printf("nCr is : %d",ncr);

    return 0;
}

int NPR(int x,int y){

    int sum= factorial(x)/factorial(x-y);

    return sum;
    
}

int NCR(int x,int y){

    int sum=factorial(x)/(factorial(x-y)*factorial(y));

    return sum;
}

int factorial(int x){

    int sum=1;
    for (int i = 1; i <= x; i++)
    {
        sum *=i;
    }

    return sum;
    
}