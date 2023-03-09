#include<stdio.h>
#include<string.h>
int main(){
    int T; scanf("%d",&T);
    char S[20];
    
    for (int i = 1; i <= T; i++)
    {
        scanf("%s",&S);

        int len = strlen(S);
        
       
            
         if (strrev(S)!=S)
        {
            printf("Case #1: Not Palindrome\n");
        }else
        {
             if (strrev(S)==S)
        {
            if (len>7)
            {
                printf("Case #2: %c%d%c\n",S[0],len-2,S[len-1]);
            }
            else
            {
                printf("Case #3: %s\n",S);
            }

            
        }
        
        
    }
    


    return 0;
}
}