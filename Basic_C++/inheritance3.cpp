#include <iostream>
#include <string>
using namespace std;

class Animal
{
	public:
		void eat()
		{
			std::cout<<"eating"<<std::endl;
		};	
};

class Dog:public Animal
{
	public:
		void bark()
		{
			std::cout<<"barking"<<std::endl;
		};
};

class babyDog:public Dog
{
	public:
		void weep()
		{
		std::cout<<"weeping"<<std::endl;
		};	
};



int main()
{
	babyDog b1;
	b1.eat();
	b1.bark();
	b1.weep();
	return 0;
}
