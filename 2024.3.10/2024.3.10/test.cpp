#include <iostream>
int main()
{
	int* p = new int;
	*p = 110;
	std::cout << *p << std::endl;
	delete p;
}