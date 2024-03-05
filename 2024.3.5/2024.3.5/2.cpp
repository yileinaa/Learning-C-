#include <iostream>
using namespace std;
int main()
{
	char p;
	cout << "请输入\n";
	while (cin.peek() != '\n')
	{
		p = cin.get();
		cout << p;
	}
	cout << endl;
	return 0;
	/*const int SIZE = 50;
	char buf[SIZE];
	cout << "请输入" << endl;
	cin.read(buf, 20);
	cout << "收集数" << cin.gcount() << endl;
	cout << "输入的是";
	cout.write(buf, 20);
	cout<< endl;
	return 0;*/
}