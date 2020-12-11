#include <iostream>
#include <string>
using namespace std;

class Address
{
	public:
		string addressline, city,state;
	Address(string addressline, string city, string state)
	{
		this->addressline = addressline;
		this->city = city;
		this->state = state;
	};
};

class Employee
{
	private:
		Address* address;
	public:
		string name;
		int id;
		Employee(string name, int id, Address* address)
		{
			this->name = name;
			this->id = id;
			this->address = address;
		};
	void display()
	{
		std::cout<<name<<"\t"<<id<<"\t"<<address->addressline<<"\t"
		<<address->city<<"\t"<<address->state<<std::endl;
	}
};


int main()
{
	Address a = Address("A-1", "pekanbaru", "rumbai");
	Employee e = Employee("ramma", 208,&a);
	e.display();
	return 0;
}
