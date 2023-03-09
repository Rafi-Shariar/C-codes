#include<stdio.h>

int c=0;

int add_three_nums(int a, int b, int c);

int main (){

    int a,b;
    scanf("%d %d",&a,&b);

    int sum=add_three_nums(a,b,c);

    printf("the sum is : %d",sum);

    return 0;
}

int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
