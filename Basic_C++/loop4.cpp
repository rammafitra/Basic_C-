//~ Write a program in C++ to check whether a number is prime or not.
#include <iostream>
using namespace std;
void number_prime(int input)
{	
	int counter = 0;
	for(int i=1; i<=input; i++)
	{
		
		if(input%i == 0)
		{
			counter = counter + 1;	
		}
	}
	if(counter == 2)
	{
		std::cout<<"prime number \n";	
	}
	else
	{
		std::cout<<"it's not prime number"<<std::endl;	
	}	
};


int main()
{
	for(int i=1; i<=20; i++)
	{
		number_prime(i);	
	}
	
}
