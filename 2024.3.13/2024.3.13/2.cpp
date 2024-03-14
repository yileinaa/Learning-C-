#include <iostream>
//重载"="
//class &operator =(const class &obj)
{
	if (this != &obj)
	{
		delete ptr;
		ptr = new int;
		*ptr = *obj.ptr;
	}
	else
	{
		std::cout << "同一对象不能处理\n";
	}
	return *this;
}
//副本构造器
class ___
{
	___(const ___& obj);
};
___::___(const ___& obj)
{
	std::cout << "进入副本构造";
	*this = obj;
	std::cout << "离开副本构造";
}