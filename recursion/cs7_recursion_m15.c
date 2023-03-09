#include<stdio.h> // print from n to 1 using recuirsion             
int main(){

    int n;scanf("%d",&n);

    p(n);

    return 0;
}

void p(int n){

    if (n>0)
    {
        printf("%d ",n);
        p(n-1);
    }
    
}