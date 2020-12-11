#include <iostream>
using namespace std;

class A
{
	protected:
		int a;
	void get_a()
	{
		std::cout<<"masukkan nilai a :"<<std::endl;
		cin>>a;
	};
	
};

class B:public A
{
	protected:
		int b;
	public:
		void get_b()
		{
			std::cout<<"masukkan nilai b :"<<std::endl;
			cin>>b;
		};
};

class C
{
	protected:
		int c;
	public:
		void get_c()
		{
			std::cout<<"masukkan nilai c :"<<std::endl;
			cin>>c;
		};
};

class D:public B, public C
{
	protected:
		int d;
	public:
		void mul()
		{
			get_a();
			get_b();
			get_c();
			std::cout<< "perkalian nilai a,b, c"<<a*b*c<<std::endl;	
		};	
};

int main()
{
	D d;
	d.mul();
	return 0;
	
}
