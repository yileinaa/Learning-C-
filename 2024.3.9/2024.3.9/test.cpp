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
	std::cout << "一只宠物出生了，名字叫做" << name << "\n";
}
Pet::~Pet()
{
	count--;
	std::cout << name << "挂掉了\n";
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
	std::cout << "\n已经诞生了" << Pet::getCount() << "只宠物\n\n";
	{
		Cat cat2("Tom");
		Mouse mouse2("Jerry");
		std::cout << "\n现在呢，已经诞生了" << Pet::getCount() << "只宠物\n\n";
	}
	std::cout << "\n现在呢，还剩下" << Pet::getCount() << "只宠物\n\n";
	return 0;
}