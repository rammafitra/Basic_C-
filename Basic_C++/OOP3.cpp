#include <iostream>
#include <string>
using namespace std;

class Employee
{
	public:
		Employee()
		{
			std::cout<<"this is constructor"<<std::endl;	
		};
		~Employee()
		{
			std::cout<<"this is destructor"<<std::endl;
		}
};
int main()
{
	Employee e1;
	Employee e2;
	return 0;
}
