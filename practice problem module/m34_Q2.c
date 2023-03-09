#include<stdio.h>
int main (){

    FILE * inputfile;
    inputfile = fopen("inputQ2.txt","r");

    if (inputfile==NULL)
    {
        printf("no file detected");
    }

    FILE * outputfile;
    outputfile = fopen("outputQ2.txt","w");

    int n;
    fscanf(inputfile,"%d",&n);

    for (int i = 1; i <= n; i++)
    {
        fprintf(outputfile,"%d ",i);
    }
    
    


    return 0;
}