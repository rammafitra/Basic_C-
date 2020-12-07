#include <iostream>
#include <string>

using namespace std;
struct Rectangle
{
	int width;
	int height;
	Rectangle(int w, int h)
	{
		width = w;
		height = h;
	};
	
	void area()
	{
		std::cout<< "Area of Rectangle is " <<(width*height)<<std::endl;
	}
};
int main()
{
	struct Rectangle rec = Rectangle(10,10);
	rec.area();
	return 0;
}
