#include<stdio.h>// missing number
int main (){
    int T;
    scanf("%d",&T);

    long long int s,a,b,c,d;

    for (int i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);

        d=s-(a+b+c);

        printf("%lld \n", d);
    }
    


    return 0;
}