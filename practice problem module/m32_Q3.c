#include<stdio.h>
void solve(int n,int i);
int main(){

    int n;
    scanf("%d",&n);

    solve(n,1);


    return 0;
}

void solve(int n,int i){

    if (i>n)
    {
        return;
    }
    
    printf("%d ",i);
    solve(n,i+1);

}