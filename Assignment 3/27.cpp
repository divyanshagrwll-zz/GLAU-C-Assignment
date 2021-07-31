#include<stdio.h> 
  
int main()  
{  
    float base, height, area;  
  
    printf("Enter length of base of Triangle\n");  
    scanf("%f", &base);  
  
    printf("Enter length of height of Triangle\n");  
    scanf("%f", &height);  
  
    area = (base * height) / 2.0;  
  
    printf("Area of Triangle is %0.2f\n", area);  
  
    return 0;  
}
