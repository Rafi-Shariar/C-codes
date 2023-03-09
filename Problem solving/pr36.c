#include<stdio.h>// out of team
int main (){
    int n,k;
    scanf("%d %d", &n,&k);

    int a[n];
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);

        if (a[i]<k)
        {
            count+=1;
        }
        
    }
    printf("%d", count);

    


    return 0;
}