#include <iostream>
using namespace std;
int main()
{
	char p;
	cout << "������\n";
	while (cin.peek() != '\n')
	{
		p = cin.get();
		cout << p;
	}
	cout << endl;
	return 0;
	/*const int SIZE = 50;
	char buf[SIZE];
	cout << "������" << endl;
	cin.read(buf, 20);
	cout << "�ռ���" << cin.gcount() << endl;
	cout << "�������";
	cout.write(buf, 20);
	cout<< endl;
	return 0;*/
}