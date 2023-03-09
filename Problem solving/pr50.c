#include<stdio.h>

int isvowel(char x){

    if (x=='A' || x=='a' || x=='E' || x=='e' || x=='I' || x=='i' || x=='O' || x=='o' || x=='U' || x=='u')
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
}

int main (){

    char ch;
    ch=getchar();    // getchar diye character input newa jay
    getchar; // aita enter er jonno

    if (isvowel(ch)==1)
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("it is a Consoent");
    }
    
    return 0;
}

