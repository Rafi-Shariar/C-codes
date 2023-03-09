#include<stdio.h>
void reverse(int n);
int main(){

    int n; scanf("%d",&n);

    reverse(n);


    return 0;
}

void reverse(int n){

if (n<1)
{
    return;
}

    printf("%d ",n);
    reverse(n-1);
}