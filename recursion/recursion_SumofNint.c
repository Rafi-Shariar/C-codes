#include<stdio.h>

int sum(int i,int n){

    int s;

    if (i>n)
    {
        return 0;
    }
    
    s=sum(i+1,n);
    return s+i;

}

int main(){

    int n; scanf("%d",&n);

    int ans=sum(1,n);

    printf("%d",ans);


    return 0;
}