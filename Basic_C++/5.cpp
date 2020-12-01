#include <iostream>
using namespace std;

float area_rectangle(float length, float width)
{
	float area = length * width;
	return area;
};

float perimeter_rectangle(float length, float width)
{
	float perimeter = 2*(length + width);
	return perimeter;
};

int main()
{
	float length = 10;
	float width = 15;
	std::cout<< " area rectangle with length : " << length << " and width " << width << " is " << area_rectangle(length,width) << std::endl;
	std::cout<< " perimeter of rectangle : " << perimeter_rectangle(length, width) << std::endl;
}

