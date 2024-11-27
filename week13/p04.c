#include <stdio.h>

struct point{
    int x;
    int y;
};

int getArea(struct point p1, struct point p2)
{
	return (p1.x-p2.x)*(p1.y-p2.y);
}

int main(int argc, char *argv[])
{
	int area;
    struct point p1,p2;

    printf("Input the coordinate p1 (x y): ");
    scanf("%d %d",&p1.x,&p1.y);
    printf("Input the coordinate p1 (x y): ");
    scanf("%d %d",&p2.x,&p2.y);

    area = getArea(p1,p2);
    printf("Area: %d",area);
}
