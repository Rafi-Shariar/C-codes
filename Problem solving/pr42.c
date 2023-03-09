#include<stdio.h>//number og uniqe handshek
int main (){

    long long int n;
    scanf("%lld", &n);

    long long int handshek=((n-1)*n)/2;

    printf("%lld",handshek);

    return 0;
}