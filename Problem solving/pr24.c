#include<stdio.h>
int main (){

    int num1,num2,rem;
    scanf("%d %d", &num1, &num2);

    int n1,n2;
    n1=num1;
    n2=num2;

    while (n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }

    printf("The GCD of %d and %d is %d.", num1,num2,n1);
    


    return 0;
}