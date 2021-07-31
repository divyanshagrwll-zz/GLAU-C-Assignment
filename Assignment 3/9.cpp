#include<stdio.h>
int main()
{
	int x,y,A;
	scanf("%d %d",&x,&y);
	printf("Before swap the value of x=%d and y=%d:\n",x,y);
    A = y;
	y = x;
	x = A;
	printf("After swap value of x=%d and y=%d",x,y);
	return 0;
}

