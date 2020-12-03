#include <iostream>
#include <string>
using namespace std;

class Circle
{
	private:
		float radius;
		string color;
	public:
		float getRadius();
		float getArea();
};

int main()
{
	Circle c1(3.0, "red");    //radius and color
	Circle c2(3.0);		     //radius and default color
	Circle c3();		     //default radius and default color
	std::cout<< c1<<'\n';
	// alternative
	//~ Circle c1 = Circle(3.0, "green");
	//~ Circle c2 = Circle(3.0);
	//~ Circle c3 = Circle();
}
