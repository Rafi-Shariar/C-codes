#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

int main(){

    struct student no1;

    scanf("%s %d %f",&no1.name,&no1.roll, &no1.marks);

    printf("name:%s  \nroll:%d   \nmarks:%.2f", no1.name, no1.roll, no1.marks);


    return 0;
}

