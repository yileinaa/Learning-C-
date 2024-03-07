#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	/*ifstream in;
	in.open("text.txt");
	if (!in)
	{
		cerr << "打开失败" << endl;
		return 0;
	}
	char x;
	while (in >> x)
	{
		cout << x;
	}
	cout << endl;
	in.close();*/
	ofstream out("text.txt", ios::in | ios::out);
	if (!out)
	{
		cerr << "打开失败" << endl;
		return 0;
	}
	for (int i = 0; i < 10; i++)
	{
		out << i;
	}
	out << endl;
	out.close();
	return 0;
}
//ios::in
//ios::out
//ios::binary
//app  trunk删除原有  nocreate不存在不创建  noreplece以存在，使用open返回错误
//*p.seekg(ios::beg);指针回开头