#include<stdio.h>

struct person
{
  char name[20];
  int age;


};

void data(struct person p);

int main(){

  struct person p1;

  data(p1);




  return 0;
}

void data(struct person p){

  scanf("%s %d",&p.name,&p.age);

  printf("Name : %s \nAge: %d",p.name,p.age);


}

