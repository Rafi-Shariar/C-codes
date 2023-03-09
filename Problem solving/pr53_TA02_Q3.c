#include<stdio.h>
#include<string.h>

void find_the_number(char x[100]);
int main(){

    char s[100];
    scanf("%s",&s);

    find_the_number(s);


    return 0;
}

void find_the_number(char x[100]){

    int len=strlen(x);

    
    int a=0,b=0,c=0;

    for (int i = 0; i <= len; i++)
    {
        if (x[i]=='1')
        {
            a++;
        }else if (x[i]=='9')
        {
          b++;
        }else if (x[i]=='7')
        {
          c++;
        }
        
    }

    if (a>0 && b>0 && c>0)
    {
      printf("Yes");
    }else
    {
      printf("No");
    }
    


}