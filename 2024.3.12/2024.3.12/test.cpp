#include <climits>
#include <iostream>
unsigned long returnFac(unsigned short num) throw(const char*)
{
	unsigned long sum = 1;
	unsigned long max= ULONG_MAX;
	for (int i = 1; i <= num; i++)
	{
		sum *= i;
		max /= i;
	}
	if (max < 1)
	{
		throw"基数太大，计算机无法计算阶乘\n";
	}
	else
	{
		return sum;
	}
}
int main()
{
	unsigned short num = 0;
	std::cout << "请输入整数";
	while (!(std::cin >> num) || (num < 1))
	{
		std::cout << std::cin.rdstate();
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "请输入整数";
	}
	std::cin.ignore(100, '\n');
	try
	{
		unsigned long fac = returnFac(num);
		std::cout << num << "阶乘是" << fac;
	}
	catch (const char* e)
	{
		std::cout << e;
	}
}