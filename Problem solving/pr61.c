#include<stdio.h>   //find the distance between x1,x2 and y1,y2
#include<math.h>

struct point
{
    int x;
    int y;
};

double distance(struct point p, struct point q){

    return sqrt( pow(p.x-q.x,2) + pow(p.y-q.y,2)  );
}


int main(){

    struct point p1,p2;

    scanf("%d %d", &p1.x, &p1.y);

    scanf("%d %d", &p2.x, &p2.y);



    printf("the distance is : %.2lf", distance(p1,p2));





    return 0;
}