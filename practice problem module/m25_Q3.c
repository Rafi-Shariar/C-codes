#include<stdio.h>
#include<string.h>
#include<math.h>
void equal_power(int *arr,int n);
int main(){

    int n; printf("number of characters : "); scanf("%d",&n);

    char s[100]; scanf("%s",&s);

    

    int len=strlen(s);

    int arr[len]; int x;

    for (int i = 0; i<len; i++)
    {
        x=(("%d",s[i]) - 96 ) ;

        arr[i]=x;
    }

    equal_power(arr,n);


    return 0;
}

void equal_power(int *arr,int n){

    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum+=("%d",*arr);
        *arr++;
    }

    int count=0;

    for ( int i = 1; pow(2,i) <=sum ; i++)
    {
        if (sum==pow(2,i))
        {
          count++;
            break;
        }else
        {
            count=0;
        }
        
        
    }

    if (count>0)
    {
        printf("Yes\n");
    }else
    {
        printf("No\n");
    }
      
    
}