#include <stdio.h>
#include <math.h>
int main()
{
float v,u=30,a=5,s=70;
//Using 3rd equation of motion : v^2 = u^2+(2a*s)
v = sqrt((u*u)+(2*a*s));
printf( "Final velosity of the car:%.2f",v);
return 0;
}
