#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z,s,A;
	scanf("%f %f %f",&x,&y,&z);
	s = (x+y+z)/2;
	printf("Semi peri =%f\n",s);
    A = sqrt(s*(s-x)*(s-y)*(s-z));
	printf("Area of triangle=%f",A);
	return 0;
}

