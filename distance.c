#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,dist;
    printf("Enter coordinates for 1st point");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinates for 2nd point");
    scanf("%f %f",&x2,&y2);
    dist=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
    printf("Distance is:%f",dist);
    return 0;
}
