#include<stdio.h>
#include<string.h>

void descending(char s[]);
int main(){

    char s[100];

    scanf("%s",&s);

    descending(s);


    return 0;
}

void descending(char s[]){
        int len=strlen(s);

    char temp;

    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (s[i]<s[j])
            {
              temp=s[j];
              s[j]=s[i];
              s[i]=temp;
            }
            
        }
        
    }

    printf("%s",s);
}