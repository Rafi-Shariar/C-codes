#include<stdio.h>
#include<string.h>
void worn_key(char s[]);
int main(){

    char s[100];
    scanf("%s",&s);

    worn_key(s);



    return 0;
}

void worn_key(char s[]){

    int len = strlen(s);

    for (int i = 0; i<len; i++)
    {

        if (i==1 || i%2!=0)
        {
            printf("%c%c",s[i],s[i]);
        }else
        {
            printf("%c",s[i]);
        }
          
    }

}