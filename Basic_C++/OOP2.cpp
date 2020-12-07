# include <iostream>
# include <string>
using namespace std;

class Employee
{
	public:
		string name;
		int id;
		float salary;
	Employee(string n, int i, float s)
	{
		name = n;
		id = i;
		salary = s;
	};
	void displayData()
	{
		std::cout<<"name pegawai : "<<name<<"\nnomor ID :"<<id<<"\ngaji perbulan :"<< salary<<std::endl;
	};
};

int main()
{
	Employee e1 = Employee("ramma fitra", 7, 9000000);
	e1.displayData();
	return 0;
}
