#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; scanf("%d",&n);

    int*p;

    //daynamic memory alocation

    p=(int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d th position --> %d\n",i,*(p+i));
    }
    
    

    return 0;
}