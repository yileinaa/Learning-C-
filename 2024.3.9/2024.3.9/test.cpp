#include <iostream>
class Pet
{
public:
	Pet(std::string theName);
	~Pet();
	static int getCount();
protected:
	std::string name;
private:
	static int count;
};
class Cat :public Pet
{
public:
	Cat(std::string theName);
};
class Mouse :public Pet
{
public:
	Mouse(std::string theName);
};
Pet::Pet(std::string theName)
{
	name = theName;
	count++;
	std::cout << "һֻ��������ˣ����ֽ���" << name << "\n";
}
Pet::~Pet()
{
	count--;
	std::cout << name << "�ҵ���\n";
}
int Pet::getCount()
{
	return count;
}
Mouse::Mouse(std::string theName) :Pet(theName)
{
}
Cat::Cat(std::string theName) :Pet(theName)
{
}
int main()
{
	Cat cat("Tom");
	Mouse mouse("Jerry");
	std::cout << "\n�Ѿ�������" << Pet::getCount() << "ֻ����\n\n";
	{
		Cat cat2("Tom");
		Mouse mouse2("Jerry");
		std::cout << "\n�����أ��Ѿ�������" << Pet::getCount() << "ֻ����\n\n";
	}
	std::cout << "\n�����أ���ʣ��" << Pet::getCount() << "ֻ����\n\n";
	return 0;
}