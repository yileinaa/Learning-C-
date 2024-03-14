#include <iostream>
int main()
{
	int* x = newInt(20);
	std::cout << *x;
	x = NULL;
	return 0;
}
int* newInt(int value)
{
#if 1
	int* myInt = new int;
	*myInt = value;
	return myInt;
#endif
}