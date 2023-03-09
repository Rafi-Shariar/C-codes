#include<stdio.h>
#include<limits.h>
void solve(void);
void input_array(void);
int max_element(int size, int arr[]);
int main (){

    int t; scanf("%d",&t);

    while (t--)
    {
        solve();
    }
    

    return 0;
}

void solve(void){

    input_array();

    int maximum=max_element(int sz,int arr[]);

    printf("%d",maximum);


}

void input_array(void){

    int sz; 
    scanf("%d",&sz);

    int arr[sz];

    for (int i = 0; i < sz; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max_element(sz,arr);
    

}

int max_element(int size, int arr[]){

    int a=INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (a<arr[i])
        {
            a=arr[i];
        }
        
    }

    return a;
    


}