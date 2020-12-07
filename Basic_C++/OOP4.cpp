#include <iostream>
#include <string>
using namespace std;
class Employee
{
	public:
		string name;
		int id;
		float salary;
	Employee(string name, int id, float salary)
	{
		this->name = name;
		this->id = id;
		this->salary = salary;
	};
	void displayData()
	{
		std::cout<<"nama pegawai : "<< name << "\nnomor id: "<< id << "\npendapatan perbulan Rp : " << salary<<std::endl;  
	};
	
};
int main()
{
	Employee e1 = Employee("ramma",7,9000000);
	e1.displayData();
	return 0;
}
