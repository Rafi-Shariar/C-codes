#include<stdio.h>
#include<string.h>
int main(){

    char s[100]; scanf("%s",&s);

    int len=strlen(s);

    for (int i = 0; i < len; i++)
    {
      if (("%d",s[i])>=65 && ("%d",s[i])<=90 )
      {
        s[i]=s[i]+32;
      }
      else if (("%d",s[i])>=97 && ("%d",s[i])<=122)
      {
        s[i]=s[i]-32;
      }
      
      
    }

    printf("%s",s);
    
    return 0;
}