#include<stdio.h>

struct points
{
    int x;
    int y;
};

int main(){

    struct points a;
    struct points b;

    mid_point(a,b);

    return 0;
}

void mid_point(struct points a, struct points b){

    printf("Enter x1 and y1 : ");
    scanf("%d %d", &a.x, &a.y);

    printf("Enter x2 and y2 : ");
    scanf("%d %d", &b.x, &b.y);

    int mid_x = (a.x +b.x)/2 ;
    int mid_y = (a.y + b.y )/2;

    printf("x :%d \n y :%d",mid_x,mid_y);
}
