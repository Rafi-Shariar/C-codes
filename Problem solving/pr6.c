#include<stdio.h>
/*Write a C program to take one non-negative integer as input and print the grade according to that input.
0-32 -> F      60-69 -> A-
33-39 -> D      70-79 -> A
40-49 -> C     80-100 -> A+
50-59 -> B     */
int main (){
    int m;
    printf("Enter marks : "); scanf("%d", &m);

    if (m>=0 && m<=32)
    {
        printf("F");
    }else if (m>=33 && m<=39)
    {
        printf("D");
    }else if (m>=40 && m<=49)
    {
        printf("C");
    }else if (m>=50 && m<=59)
    {
        printf("B");
    }else if (m>=60 && m<=69)
    {
        printf("A-");
    }else if (m>=70 && m<=79)
    {
        printf("A");
    }else if (m>=80 && m<=100)
    {
        printf("A+");
    }else{
        printf("Invalid Input");
    }
    
    
    
    
    
    
    


    return 0;
}