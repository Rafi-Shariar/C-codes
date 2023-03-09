#include<stdio.h>
#include<math.h>
int power(int n, int m);
int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    int ans=pow(n,m);

    printf("%d",ans);



    return 0;
}

int power(int n, int m){

    int s;

    if (m==0)
    {
        return 0;
    }
    

    s= n*power(n,m-1);

    return s;

    
}