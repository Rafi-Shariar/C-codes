#include<stdio.h>

struct student
{
   
    int roll;
    int age;
    float weight;
};

int main(){

    struct student s={12, 21, 63.56};

    printf("roll:%d\n  age:%d\n  weight:%f\n",s.roll,s.age,s.weight );

    return 0;
}




