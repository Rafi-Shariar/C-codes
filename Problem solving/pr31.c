#include<stdio.h> //https://codeforces.com/problemset/problem/231/A
int main (){

    int n; // number of problems 
    scanf("%d", &n);
    int a,b,c;

    int solved=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a,&b,&c);

        if ((a+b+c)>=2)
        {
            solved++;
        }
        
    }
    printf("%d", solved);
    



    return 0;
}