#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int age;
    float marks;
};

int main(){

    struct student info ={"Rafi Shariar", 2013, 22, 88.34};

    printf("name: %s \nroll: %d  \nage: %d   \nmarks: %.2f",info.name,  info.roll,  info.age, info.marks);

    return 0;
}


/* designated initialization
  struct student info ={.name="Rafi Shariar", .roll= 2013, .age=22, .marks= 88.34};
  
  */