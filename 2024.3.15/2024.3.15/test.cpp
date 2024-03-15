//链接{external,internal(函数，变量，模板，命名空间),none(函数内部变量)}
//存储类storage class{auto,static,extern,register(存储到寄存器)}
//基本的模板语法:泛型编程(template)----STL库
//需要函数和类，不必限定数据类型用占位符T编写，不能分成原型和实现
#include <iostream>
template <class T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int i1 = 100;
	int i2 = 200;
	std::cout << "交换前，i1=" << i1 << "，i2=" << i2 << "\n";
	swap(i1, i2);
	std::cout << "交换前，i1=" << i1 << "，i2=" << i2 << "\n";
	std::string s1 = "nb";
	std::string s2 = "sb";
	std::cout << "交换前，s1=" << s1 << "，s2=" << s2 << "\n";
	swap(s1, s2);
	std::cout << "交换前，s1=" << i1 << "，s2=" << s2 << "\n";
}

