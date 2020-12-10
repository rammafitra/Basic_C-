//~ C++ Single Level Inheritance Example: Inheriting Fields
#include <string>
#include <iostream>
using namespace std;

class Salary
{
	public:
		float salary = 1000000;
};

class Employee:public Salary
{
	public:
		string name = " ramma ";
	
};

int main()
{
	Employee e1;
	std::cout<<e1.name<<"\t"<<e1.salary<<std::endl;
	
	return 0;
}


