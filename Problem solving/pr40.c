#include<stdio.h>//secret code
int main (){
    int t; scanf("%d", &t);

    long long int n;
    
    int count=0;
    for (int i = 1; i <= t; i++)
    {
        scanf("%lld",&n);  

    }
    for (int i = 1; i <= t; i++){
      
      for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
            
        }
        
    }
    if (count==2)
    {
        printf("Yes\n");
    }else
    {
        printf("No\n");
    }
        
        
       
        
        
    }
    


    return 0;
}