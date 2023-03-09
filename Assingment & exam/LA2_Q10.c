#include<stdio.h>
void beautiful_array(int n,int*p);
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int*p=&arr[0];

    beautiful_array(n,p);
    

    return 0;
}

void beautiful_array(int n,int*p){

 
    int count=0;

    for (int i = 0; i < n; i++)
    {
         while (*p%10!=0)
         {
            if (*p%10==7)
            {
                count+=1;
                break;
            }else
            {
                *p=*p/10;
            }
            
                  

         }
         p++;
        
    }

    int s;

    if (n%2==0)
    {
        s=n/2;
    }else
    {
        s=(n/2)+1;
    }
    
    if (count==s)
    {
        printf("Beautiful");
    }else
    {
        printf("Ugly");
    }
    
    
    

}