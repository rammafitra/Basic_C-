//~ C++ Hierarchical Inheritance (example)
#include <iostream>
using namespace std;

class Shape
{
	public:
		int a;
		int b;
	void get_data(int a, int b)
	{
		this->a = a;
		this->b = b;	
	};	
};
class Rectangle:public Shape
{
	public:
		int area()
		{
			int result = a*b;
			return result;
		};
};

class Triangle:public Shape
{
	public:
		float T_area()
		{
			float result = 0.5*a*b;
			return result;
		};
};

int main()
{
	
	Rectangle r;
	Triangle t;
	r.get_data(4,4);
	t.get_data(4,4);
	std::cout<<r.area()<<std::endl;
	std::cout<<t.T_area()<<std::endl;
	
}
