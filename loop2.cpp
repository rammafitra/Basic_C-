//~ Write a program in C++ to find the sum of first 10 natural numbers
#include <iostream>
using namespace std;

void sum()
{
	int x = 0;
	for(int i=0; i<=10; i++)
	{
		x = x + i;		
	}
	std::cout<<x<<std::endl;
}


int main()
{
	sum();	
}
