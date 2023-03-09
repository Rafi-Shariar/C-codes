#include<stdio.h>

int GCD(int x,int y){

    for (int i = x; i >= 1; i--)
    {
        if (x%i==0 && y%i==0)
        {
            return i;
        }
        
    }
}


int main(){

    int a,b;
    scanf("%d %d",&a,&b);

    int ans;

    ans=GCD(a,b);
    printf("GCD is : %d",ans);

    return 0;
}