#include <iostream>
#include <string>
using namespace std;

struct Rectangle
{
	int width;
	int height;
};

int main()
{
	struct Rectangle rec;
	rec.width = 8;
	rec.height = 5;
	std::cout<<"Area of Rectangle is :" <<(rec.width*rec.height)<<std::endl;
	return 0;
};
