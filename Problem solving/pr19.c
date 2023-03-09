#include<stdio.h>
int main (){

    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d && a!=b!=c!=d!=a)
    {
        printf("largest = %d \n", a);
    }
    else if (b>a && b>c && b>d && b!=a!=c!=d!=b)
    {
        printf("largest = %d \n", b);
    }
    else if (c>a && c>b && c>d && c!=a!=b!=d!=c)
    {
        printf("Largest = %d \n", c);
    }
    else if (d>a && d>c && d>c && d!=a!=b!=c!=d)
    {
        printf("Largest = %d \n", d);
    }
 
    

    if (a<b && a<c && a<d && a!=b!=c!=d!=a)
    {
        printf("Smallest = %d \n", a);
    }
    else if (b<a && b<c && b<d && b!=a!=c!=d!=b)
    {
        printf("Smallest = %d \n", b);
    }
    else if (c<a && c<b && c<d && c!=a!=b!=d!=c)
    {
        printf("Smallest = %d \n", c);
    }
    else if (d<a && d<b && d<c && d!=a!=b!=c!=d )
    {
        printf("Samllest = %d  \n", d);
    }

    return 0;
}