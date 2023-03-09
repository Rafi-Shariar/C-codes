#include<stdio.h>
int main(){

    FILE * inputfile;
    inputfile =fopen("inputQ1.txt","r");

    if (inputfile==NULL)
    {
        printf("No file detected");
    }
    

    FILE * outputfile;
    outputfile = fopen("outputQ1.txt","w");

    int n; scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        fprintf(outputfile,"%d ",i);
    }
    
    return 0;
}