#include<stdio.h>
int main(){

    char sen[100];
    fgets(sen,sizeof(sen),stdin);

    int count=0;
    int i=0;
    while (sen[i]!='\0')
    {
        if (sen[i]=='a')
        {
            count++;
        }
        else if (sen[i]=='e')
        {
            count++;
        }
        else if (sen[i]=='i')
        {
            count++;
        }
        else if (sen[i]=='o')
        {
            count++;
        }
        else if (sen[i]=='u')
        {
            count++;
        }
        i++;
        
        
    }
    printf("vowels : %d", count);
    


    return 0;
}