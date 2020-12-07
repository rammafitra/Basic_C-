#include <iostream>
#include <string>
using namespace std;

class Employee
{
	public:
		string name;
		int id;
		static int count;
	Employee(string name, int id)
	{
		this->name = name;
		this->id = id;
		count++;	
	};
	
	void displayData()
	{
		std::cout<<name<< " " <<id<< std::endl;
	};
};

int Employee::count =0;
int main()
{
	Employee e1 = Employee("ramma", 1);
	Employee e2 = Employee("fitra", 2);
	e1.displayData();
	e2.displayData();
	std::cout<<"total pegawai : "<<Employee::count<<std::endl;
	return 0;
}
