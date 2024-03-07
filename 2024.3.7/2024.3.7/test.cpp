#include <iostream>
using namespace std;
int main()
{
	/*cout << "请输入Y/y和N/n\n" << endl;
	char answer;
	cin >> answer;
	cout <<answer << endl;
	cin.ignore(100, '\n');
	cin.get();*/
	cout << "请输入xx.xC或xx.xF" << endl;
	const unsigned short ADD = 32;
	const double RAT = 9.0 / 5.0;
	double temin, temout;
	char typein, typeout;
	cin >> temin >> typein;
	cin.ignore(100,'\n');
	cout << "\n";
	switch (typein)
	{
	case 'C':
	case 'c': {
		temout = temin * RAT + ADD;
		typeout = 'F';
		typein = 'C';
		break;
	}
	case 'F':
	case 'f':
	{
		temout = (temin - ADD) / RAT;
		typeout = 'C';
		typein = 'F';
		break;
	}
	default:
		typeout = 'E';
	}
	if (typeout != 'E')
	{
		cout << temin << typein << "=" << temout << typeout << "\n\n";
	}
	else
		cout << "输入错误" << "\n\n";
	cin.ignore(100, '\n');
	cin.get();

	return 0;
}//cin.eof达到末尾返回ture.cin.fail无法工作bad内存不足无法工作good