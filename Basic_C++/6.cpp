//~ the area of triangle using Heros's Formula
#include <iostream>
#include <math.h>
using namespace std;

float area_triangle(float a, float b, float c)
{
	float s = (a + b + c)/2;
	float area = sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
};

int main()
{
	float a = 5;
	float b = 5;
	float c = 5;
	
	std::cout<<"area of triangle : " << area_triangle(a,b,c) <<std::endl;
	
}
