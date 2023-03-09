#include<stdio.h>
int main(){

  char string[100];
  scanf("%s",&string);

  bianry_string(string);

  return 0;
}

void bianry_string(char x[100]){

  int flag=0;

  for (int i = 0; x[i] != '\0'; i++)
  {
    if (x[i]=='1' || x[i]=='0')
    {
      continue;
    }else
    {
      flag=1;
      break;
    }
    
    
  }

  if (flag==1)
  {
    printf("No");

  }else
  {
    printf("Yes");
  }
  
  
  
}