#include<stdio.h>

struct PhitronStudent
{
   char name[20],email[50],date[20];
   int marks;
};

struct PhitronStudent heroes[3];
int main(){

  for (int i = 1; i <= 3; i++)
  {
    printf("Enter information for hero %d\n",i);
    printf("Enter Name :\n");
    fflush(stdin);
    gets(heroes[i].name);

    printf("Enter email :\n");
    gets(heroes[i].email);

    printf("Enter date :\n");
    gets(heroes[i].date);

    printf("Marks :");
    scanf("%d",&heroes[i].marks);
  }


  //printing

  for (int i = 1; i <= 3; i++)
  {
    printf("\n Information of hero %d \n",i);

    printf("Name : %s",heroes[i].name);
    printf("\nEmail:%s",heroes[i].email);
    printf("\nDate:%s",heroes[i].date);
    printf("\nMarks:%d",heroes[i].marks);
  }
  
  


  return 0;
}