#include<stdio.h>// choto theke boro shajate hobe
int main (){
    
    int ara[8]={12,7,9,3,15,2,6,5};

    for (int i = 0; i < 8; i++)
    {
        printf("%d ",ara[i]);
    }
    
    for (int j = 0; j < 8; j++)
    {
        
    
    

    int sorted_ara[8];

    int min=ara[0];
    int m_index=0; // kon jaga minimum ta paise ta mone rakhar jonno

    for (int i = 0; i < 8; i++)
    {
        if (ara[i]<min)
        {
            min=ara[i];
            m_index=i; 
        }
        
    }
    sorted_ara[0]=min; // new arrar 1st element oi minimum ta hobe
    ara[m_index]=9999; // real array jeikhene min pawa gesilo oita k remove korar jonno aita kora.

    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",sorted_ara[i]);
    }

    }

    


    return 0;
}