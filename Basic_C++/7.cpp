#include <iostream>
using namespace std;
#define Pi 3.14

float area_circle(float radius)
{
	float area = Pi*radius*radius;
	return area;
}

float circum_circle(float radius)
{
	float circum = 2*Pi*radius;
	return circum;
}

int main()
{
	float radius = 5;
	std::cout<<"area of circle is "<< area_circle(radius) << std::endl;
	std::cout<<"circum of circle is " << circum_circle(radius) << std::endl;
	return 0;
}
