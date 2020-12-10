//~ C++ Single Level Inheritance Example: Inheriting Methods (example)
#include <iostream>
#include <string>
using namespace std;

class A
{
	private:
		int a = 40;
		int b = 50;
	public:
		int mul()
		{
			int c = a * b;
			return c;
		};
};

class B:public A
{
	public:
		void display()
		{
			int result = mul();
			std::cout<<result<<std::endl;
		};
};
int main()
{
	B b1;
	b1.display();
	return 0;
}
