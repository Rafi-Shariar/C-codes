#include<stdio.h>
int main(){

    FILE * inputfile;
    inputfile = fopen("inputQ3.txt","r");

    if (inputfile==NULL)
    {
        printf("No file detected");
    }
    

    FILE * outputfile;
    outputfile = fopen("outputQ3.txt","w");

    int t;
    fscanf(inputfile,"%d",&t);

    for (int i = 1; i <= t; i++)
    {
        int a=0;
        fscanf(inputfile,"%d",&a);

        if (a>0)
        {
            for (int i = a; i >= (-a); i--)
            {
                fprintf(outputfile,"%d ",i);
            }
            
        }
        else if (a<0)
        {
            for (int i =a ; i <= 0; i++)
            {
                fprintf(outputfile,"%d ",i);
            }
            int k=a*(-1);

            for (int i = 1; i <= k; i++)
            {
                fprintf(outputfile,"%d ",i);
            }
            
            
        }

        fprintf(outputfile,"\n");
        
        
    }
    


    return 0;
}