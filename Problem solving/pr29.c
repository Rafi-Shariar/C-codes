#include<stdio.h> // finding missing number using array
int main (){
    int n;
    int ara[10001];
    int x;

    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        ara[x]=1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ara[i]==0)
        {
            printf("%d", i);
        
        }
        
    }

    return 0;
}