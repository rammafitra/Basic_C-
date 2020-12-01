//~ swap two number
#include <iostream>
using namespace std;

int main()
{
	int x = 29;
	int y = 39;
	
	int temp;
	
	temp = x;
	x = y;
	y = temp;
	
	std::cout<<y<<std::endl;
	std::cout<<x<<std::endl;
	
	
}
