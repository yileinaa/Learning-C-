//����{external,internal(������������ģ�壬�����ռ�),none(�����ڲ�����)}
//�洢��storage class{auto,static,extern,register(�洢���Ĵ���)}
//������ģ���﷨:���ͱ��(template)----STL��
//��Ҫ�������࣬�����޶�����������ռλ��T��д�����ֳܷ�ԭ�ͺ�ʵ��
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
	std::cout << "����ǰ��i1=" << i1 << "��i2=" << i2 << "\n";
	swap(i1, i2);
	std::cout << "����ǰ��i1=" << i1 << "��i2=" << i2 << "\n";
	std::string s1 = "nb";
	std::string s2 = "sb";
	std::cout << "����ǰ��s1=" << s1 << "��s2=" << s2 << "\n";
	swap(s1, s2);
	std::cout << "����ǰ��s1=" << i1 << "��s2=" << s2 << "\n";
}

