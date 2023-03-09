#include<stdio.h>
int main (){
    float x,avg,sum;

    for (int i = 1; i <= 10; i++)
    {
        printf("enter marks of %dth student : \n", i); // asking every student their marks
        sum=0.0;
        
        for (int j = 1; j <=3; j++)
        {
            scanf("%f ",&x); // taking input of 3 marks in x variable
            sum +=x;
        }
        avg = sum/3;

        printf("avarage of:%f \n",avg);
        
    }
    


    return 0;
}