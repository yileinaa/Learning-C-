#include <iostream>
//����"="
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
		std::cout << "ͬһ�����ܴ���\n";
	}
	return *this;
}
//����������
class ___
{
	___(const ___& obj);
};
___::___(const ___& obj)
{
	std::cout << "���븱������";
	*this = obj;
	std::cout << "�뿪��������";
}