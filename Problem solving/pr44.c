#include<stdio.h>
int main(){
    char word[100];

    fgets(word,sizeof(word),stdin);

    int l = strlen(word)-1; // -1 bcz aita input dewar por enter tao count kore

    if (l>10)
    {
        printf("%c%d%c",word[0],l-2,word[l-1]);
    }
    else
    {
        puts(word);
    }
    
    


    return 0;
}