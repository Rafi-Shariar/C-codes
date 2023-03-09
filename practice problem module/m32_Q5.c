#include<stdio.h>
int sum(int n,int i);
int main(){

    int n;
    scanf("%d",&n);

    int ans=sum(n,1);

    printf("%d",ans);


    return 0;
}

int sum(int n,int i){

    if (i>n)
    {
        return 0;
    }
    

    int s=sum(n,i+1);
    return s+i;


}