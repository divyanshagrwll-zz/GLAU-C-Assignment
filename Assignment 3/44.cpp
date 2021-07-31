#include <stdio.h>
int main()
{
float v,u=0,a=4,t=3,s;
//Using 1st equation of motion
v = u+(a*t);
printf( "Final velosity of the horse:%.2f",v);
// Using 2nd equation of motion
s=((u*t)+(a*t*t)/2);
printf( "\nDistance travelled by the horse:%.2f",s);
return 0;
}
