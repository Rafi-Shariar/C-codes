#include<stdio.h>
#include<string.h>
void shifting(char s[]);
int main(){

    char s[100];

    scanf("%s",&s);

    shifting(s);




    return 0;
}

void shifting(char s[]){

    int len=strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (("%d",s[i])%2==0)
        {
            s[i] =("%d",s[i])-32;
        }
        
    }
    
    printf("%s",s);
    
}