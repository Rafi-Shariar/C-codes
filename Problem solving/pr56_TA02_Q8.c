#include<stdio.h>
int main(){

    char s[100];
    int n;

    scanf("%s %d",&s,&n);

    int len=strlen(s);
    
    int i,x;
    char y;

    char temp='a';

    for ( i = 0; i < len; i++)
    {
        if ( (("%d",s[i]) + n ) <= 122)
        {
            s[i]=("%d",s[i])+n;
        }
        else if ( (("%d",s[i]) + n) > 122 )
        {
            x=(("%d",s[i]) + n)-122 ;

            y= (("%d",temp)+x)-1;

            s[i]=("%d",y);
        }
        
        
    }
    
    for ( i = 0; i < len; i++)
    {
        printf("%c",s[i]);
    }
    

    


    return 0;
}