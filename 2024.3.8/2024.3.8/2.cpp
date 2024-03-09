#include <iostream>
class Animals
{
public:
	std::string mouths;
	Animals(std::string the_name);
	void eat();
	void sleep();
	void drool();
protected:
	std::string name;
};
Animals::Animals(std::string the_name)
{
	name = the_name;
}
class Pig :public Animals
{
public:
	void climb();
	Pig(std::string the_name);
};
Pig::Pig(std::string the_name):Animals(the_name)
{
	;
}
void Animals::sleep()
{
	std::cout << name << std::endl;
}
int main()
{
	std::string name;
	std::cin >> name;
	Pig P(name);
	std::cout << "ÖíµÄÃû×ÖÊÇ"  << std::endl;
	P.sleep();
	return 0;
}