//~ C++ Multiple Inheritance
#include <iostream>
#include <string>
using namespace std;

class A
{
	protected:
		int a;
	public:
		void get_a(int n)
		{
			a = n;
		};
};

class B 
{
	protected:
		int b;
	public:
		void get_b(int n)
		{
			b = n;
		};
};

class C:public A, public B
{
	public:
		void display()
		{
			std::cout<<" the value of a is : " << a <<std::endl;
			std::cout<<" the value of b is : " << b << std::endl;
			std::cout<<" addition a and b is : " << a + b << std::endl;	
		};
	
};


int main()
{
	C c1;
	c1.get_a(10);
	c1.get_b(20);
	c1.display();
	return 0;
};
