# include <iostream>
# include <string>
using namespace std;

class Employee
{
	public:
		int id;
		float salary;
		string name;
	void insert(int i, float s, string n)
	{
		id = i;
		salary = s;
		name = n;
		
	}
	void display()
	{
		std::cout<<id<< " Rp. " <<salary<< " " << name << '\n';
	}
};

int main()
{
	Employee e1; 
	e1.insert(007,1000000, "ramma");
	e1.display();
	return 0;
	
}
