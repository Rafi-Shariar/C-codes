/*https://codeforces.com/problemset/problem/617/A*/
#include<stdio.h>
int main (){
    int d;
    scanf("%d", &d);
    int s;
    if (d%5==0)
    {
        s=d/5;
    }
    else
    {
        s=(d/5)+1;
    }
    printf("%d ",s);
    
    


    return 0;
}