//~ Write a program in C++ to display n terms of natural number and their sum.
#include <iostream>
using namespace std;

void result(int n)
{	
	int x= 0;
	std::cout<<"display n terms of natural number \n";
	for(int i=0; i<n; i++)
	{
		std::cout<<i<<std::endl;
		x = x + i;
		
	}
	std::cout<<"sum of n natural number : "<< x << '\n';
	
};



int main()
{
	result(7);
	return 0;
}
