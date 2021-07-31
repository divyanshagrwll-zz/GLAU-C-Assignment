#include<stdio.h>
#include<math.h>
void main()
{
float x1,y1,y2,x2,slope;
double angle,a;
scanf(“%f%f%f%f”,&x1,&y1,&x2,&y2);
slope=(y2-y1)/(x2-x1); a=cons(slope);
angle=(sin(slope))/a;
printf(“slope %.2f\n
angle%If”,slope,angle);
}
