#include<stdio.h>
int main(){

    FILE * inputfile;
    inputfile = fopen("inputQ4.txt","r");

    if (inputfile==NULL)
    {
        printf("no file detected");
    }
    

    FILE * outputfile;
    outputfile = fopen("outputQ4.txt","w");

    int n;
    fscanf(inputfile,"%d",&n);

    
        int sum=0;
    for (int i = 1; i <= n; i++)
    {
        int a=0;
        fscanf(inputfile,"%d",&a);

        int last=0;
        last=a%10;

        sum+=last;


    }
    

    fprintf(outputfile,"%d",sum);
    


    return 0;
}