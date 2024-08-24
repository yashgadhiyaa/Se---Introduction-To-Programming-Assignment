//WAP to find area of circle, rectangle and triangle //
#include<stdio.h>
int main()
{
	float pi=3.14,area;
	int r,l,w,ar,base,height;
	//find the circle
	printf("\nfind the circle ");
	printf("enter the value of r =");
	scanf("%d",&r);
	area=2*pi*r*r;
	printf("the answer is %f",area);
	
	//find the rectangle
	printf("\nfind rectangle");
	printf("\nenter the value of l=");
	scanf("%d",&l);
	printf("\nenter the value of w=");
	scanf("%d",&w);
	ar=l*w;
	printf("\nthe answer is = %d",ar);
	
	//find the triangle	
	printf("\nfind the triangle");
	printf("\nenter the value of base = ");
	scanf("%d",&base);
	printf("\nenter the value of height");
	scanf("%d",&height);
	ar=(base*height)/2;
	printf("\nthe answer is= %d ",ar);
	return 0;
}
