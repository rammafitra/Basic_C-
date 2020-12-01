//~ calculate volume of Cylinder
#include <iostream>
using namespace std;

float volume_cylinder(float radius, float height)
{
	float volume = 3.14 * radius * radius * height;
	return volume;
	
}
int main()
{
	float radius = 6.0;
	float height = 8.0;
	std::cout<<" volume of cylinder with radius: " << radius << " and height : " << height << " is " << volume_cylinder(radius, height) << std::endl; 
	
}
