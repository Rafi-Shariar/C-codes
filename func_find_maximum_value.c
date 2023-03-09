#include<stdio.h>
int maximum_value(int x, int y, int z){

    if (x>y && x>z)
    {
        return x;
    }else if (y>x && y>z)
    {
        return y;
    }else if (z>x && z>y)
    {
        return z;
    }
    
    
    
}

int main(){

    int a,b,c;
    

    int m;

    for (int i = 1; i <= 3; i++)
    {
       scanf("%d %d %d",&a,&b,&c);
       m=maximum_value(a,b,c); 
        printf("the maximum value is : %d",m);
    }
    

    return 0;
}