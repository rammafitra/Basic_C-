//~ calclute volume of cube
#include <iostream>
using namespace std;

float volume_cube(float s)
{
	float volume = s*s*s;
	return volume;
	
}

int main()
{
	float s = 5.0;
	std::cout<<"volume cube with : " << s << " is " << volume_cube(s) <<std::endl;
		
	
}
