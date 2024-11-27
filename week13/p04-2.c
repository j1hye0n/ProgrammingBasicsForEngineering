#include <stdio.h>

struct point{
    int x;
    int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2)
{
	return (pPtr1->x-pPtr2->x)*(pPtr1->y-pPtr2->y);
}

int main(int argc, char *argv[])
{
	int area;
    struct point p1, p2;
    struct point *pPtr1=&p1, *pPtr2=&p2;

    printf("Input the coordinate p1 (x y): ");
    scanf("%d %d",&p1.x,&p1.y);
    printf("Input the coordinate p1 (x y): ");
    scanf("%d %d",&p2.x,&p2.y);

    area = getArea(pPtr1,pPtr2);
    printf("Area: %d", area);
    
    return 0;
}
