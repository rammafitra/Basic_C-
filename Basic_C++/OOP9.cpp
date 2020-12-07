#include <iostream>
using namespace std;

enum week {Monday, Tuesday, Wednesday, Thursdat, Friday, Saturday, Sunday};
int main()
{
	week day;
	day = Sunday;
	std::cout<<"Day: "<<day + 1<<std::endl;
	return 0;
}
