#include<stdio.h>
int main(){

    FILE * inputFile;
    inputFile = fopen("input2.txt","r");

    if (inputFile==NULL)
    {
        printf("No file detected");
    }

    FILE * outFile;
    outFile = fopen("output.txt","w");

    int n;
    fscanf(inputFile,"%d",&n);

    int sum=0;

    for (int i = 0; i < n; i++)
    {
        int a;
        fscanf(inputFile,"%d",&a);
        sum+=a;
    }

    fprintf(outFile,"sum: %d",sum);
    
    


    return 0;
}