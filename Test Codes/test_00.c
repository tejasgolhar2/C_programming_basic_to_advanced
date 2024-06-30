#include<stdio.h>

struct point
{
    int x;
    int y;
};

struct rectangle
{
  struct point upperLeft;
  struct point lowerRight;

};

int area(struct rectangle r)
{
    int length = r.upperLeft.x - r.lowerRight.x;
    int breadth = r.upperLeft.y - r.lowerRight.y;
    return length * breadth;
};

int main()
{
    struct rectangle r;

    printf("Enter co-ordinates of upperLeft Point:\n");
    scanf("%d %d", &r.upperLeft.x, &r.upperLeft.y );
    printf("Enter co-ordinates of lowerRight Point:\n");
    scanf("%d %d", &r.lowerRight.x, &r.lowerRight.y );

    int rect_area = area(r);
    printf("Area of rectangle: %d\n", rect_area);

  return 0;
}