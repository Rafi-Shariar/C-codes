#include<stdio.h> //calculate manhattan distance using structure
#include<math.h>

struct points
{
    int x;
    int y;
};

void manhatan_distance(struct points a,struct points b);

int main(){

    struct points a;
    struct points b;

    manhatan_distance(a,b);


    return 0;
}

void manhatan_distance(struct points a,struct points b){

    printf("Enter x1 & y1 : ");
    scanf("%d %d",&a.x,&a.y);

    printf("Enter x2 & y2 : ");
    scanf("%d %d",&b.x,&b.y);

    int distance = ( abs(a.x - b.x) + abs(a.y - b.y) );

    printf("The manhatan distance is : %d",distance);
}