#include<stdio.h> // finding maximun value in array.
int main (){
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d ", &a[i]);
    }
    
    int m=a[0];
    for (int i = 0; i < 6; i++)
    {
        if (a[i]>m)
        {
            m=a[i];
        }
        
    }
    printf("the maximun value is %d", m);

    


    return 0;
}