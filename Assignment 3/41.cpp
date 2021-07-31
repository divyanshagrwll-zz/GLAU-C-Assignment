#include<stdio.h>
int main()
{
float g1,g2,g3,g4,g5,c1,c2,c3,c4,c5,spi;
scanf(“%f%f%f%f%f%f%f%f%f%f”,&g1,&g2,&g3,&g4,&g5,&c1,&c2,&c3,&c4,&c5);
spi=(g1*c1+g2*c2+g3*c3+g4*c4+g5*c5)/(c1+c2+c3+c4+c5);
printf(“%.2f,spi);
return 0;
}
