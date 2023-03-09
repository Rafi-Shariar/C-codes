#include<stdio.h>//bablu and the phone
int main(){
    int t; scanf("%d", &t);
    int x; char p;

    

    for (int i = 1; i <=t ; i++)
    {
        scanf("%d%c",&x,&p);

        int a=(60-x)+20*2+20*3;
        int b = (80-x)*2+20*3;
        int c = (100-x)*3;
        int d=0;

        if (x>=0 && x<60)
        {
            printf("%d minutes\n",a);
        }
        else if (x>=60 && x<80)
        {
            printf("%d minutes\n", b);
        }
        else if (x>=80 && x<100)
        {
            printf("%d minutes\n", c);
        }
        else if (x==100)
        {
            printf("%d minutes\n", d);
        }
        
        

        
        
    }
    


    return 0;
}