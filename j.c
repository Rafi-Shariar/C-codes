#include<stdio.h>
void beautiful_array(int n,int arr[]);
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    beautiful_array(n,arr);
    

    return 0;
}

void beautiful_array(int n,int arr[]){

 
    int count=0;

    for (int i = 0; i < n; i++)
    {
         while (arr[i]%10!=0)
         {
            if (arr[i]%10==7)
            {
                count+=1;
                break;
            }else
            {
                arr[i]=arr[i]/10;
            }
            
                  

         }
         
        
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