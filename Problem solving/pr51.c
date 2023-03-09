#include<stdio.h>

int total(int n,int input[]);

int main(){

    int ara[]={12,34,45,56,78,52,2,3,56,29};

    int sum = total(10,ara); //here 10 is number of elements in the array

    printf("The total sum is : %d",sum); 


    return 0;
}

int total(int n,int input[]){
    
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum+=input[i];
    }

    return sum;
    
}