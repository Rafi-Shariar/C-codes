#include<stdio.h>// difference between the highest marks
int main (){
    int n; scanf("%d",&n);
    int marks[100];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &marks[i]);
    }
    int higest=marks[1];
    for (int i = 1; i <= n; i++)
    {
        if (marks[i]>higest)
        {
            higest=marks[i];
        }
        
    }
    int diff;
    for (int i = 1; i <= n; i++)
    {
        diff=higest-marks[i];
         printf("%d ", diff);
    }
   
    
    

    

 
        
    
    return 0;
}