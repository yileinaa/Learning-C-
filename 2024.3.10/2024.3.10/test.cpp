#include <iostream>
using namespace std;
//int main()
//{
//	int* p = new int;
//	*p = 110;
//	std::cout << *p << std::endl;
//	delete p;
//}
//virtual �鷽��
//���� operator ������//����
class Rational
{
public:
	Rational operator + (Rational  rhs);
private:
	int numerator;
	int denominator;
};
int main()
{

}