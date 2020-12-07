#include <iostream>
#include <string>
using namespace std;
class Employee
{
	public:
		string name;
		int id;
		static float rate;
	Employee(string name, int id)
	{
		this->name = name;
		this->id = id;
	};
	void displayData()
	{
		std::cout<<name<<"\t"<<id<<"\t"<<rate<<std::endl;		
	};
};
float Employee::rate = 9.5;
int main()
{
	Employee e1 = Employee("ramma fitra", 7);
	e1.displayData();
	return 0;
}
