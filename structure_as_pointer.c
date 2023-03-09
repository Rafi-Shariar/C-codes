#include<stdio.h>

struct student
{
    double marks;
    char name;
    int roll;
};

int main(){

    struct student s={.roll=12, .marks=98.34};

    struct student* sp;

    sp = &s;

    printf("%lf  %d", sp->marks, sp->roll );


    return 0;
}