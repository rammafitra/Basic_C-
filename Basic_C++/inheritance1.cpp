//~ C++ Single Level Inheritance Example: Inheriting Methods
#include <iostream>
#include <string>
using namespace std;
class animal
{
	public:
		void eat()
		{
			std::cout<<" Eating "<<std::endl;
		};
};

class dog:public animal
{
	public:
		void bark()
		{
			std::cout<<" barking " <<std::endl;
		};
};



int main()
{
	dog d1;
	d1.eat();
	d1.bark();
}
