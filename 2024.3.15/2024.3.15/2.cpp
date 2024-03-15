#include <iostream>
class A
{
public:
	int count;
	A();

	void print(int x);
};
A::A()
{
	;
}
void A::print(int x)
{
	count = x;
	std::cout << count << std::endl;
}
int main()
{
	A* q = new A;
	A a;
	A b;
	A c;
	A d;
	a.print(1);
	b.print(2);
	c.print(3);
	d.print(4);
	std::cout << &a << "\n";
	std::cout << &c << "\n";
	std::cout << &c << "\n";
	std::cout << &d << "\n";
	delete[]q;
}