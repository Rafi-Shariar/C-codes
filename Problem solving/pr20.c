#include<stdio.h>
int main (){
    long long int n;
    scanf("%lld",&n);
    int digits = 0;
 
    while (n!=0)
    {
        n=n/10;
 
        digits++;
    }
    printf("%d", digits);
 
    return 0;
}
