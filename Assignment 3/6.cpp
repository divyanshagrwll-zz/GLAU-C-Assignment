#include<stdio.h>
int main()
{
	int x,y,A,B;
	puts("Enter the value of x and y:");
	scanf("%d %d",&x,&y);
	A = x/y;
	B = x%y;
	printf("Quoteint=%d and Remainder=%d",A,B);
	return 0;
}

