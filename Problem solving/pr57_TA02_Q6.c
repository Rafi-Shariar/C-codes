#include<stdio.h>

int factorial(int n);
int fac_ratio(int a,int b);

int main(){

    int n,m; scanf("%d %d",&n,&m);

    int ans = fac_ratio(n,m);

    printf("The ratio  is = %d : 1",ans);




    return 0;
}

int factorial(int n){


    int fact=1;

    for (int i = n; i >=1; i--)
    {
        fact=fact*i;
    }
    
    return fact;
}

int fac_ratio(int a,int b){

    int ratio;

    if (a>b)
    {
        ratio=factorial(a)/factorial(b);
    }
    else if (a<b)
    {
        ratio=factorial(b)/factorial(a);
    }
    

    return ratio;


}

