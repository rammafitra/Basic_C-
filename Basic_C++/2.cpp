//~ calculate the volume of sphere
#include <iostream>
using namespace std;

float volume_sphere(float radius)
{
	float Volume = 4/3 * 3.14 * radius * radius * radius;
	return Volume;
}
int main()
{
	float radius = 6;
	std::cout<<"volume of sphere with radius = " << radius << volume_sphere(radius) << std::endl;
	
}
