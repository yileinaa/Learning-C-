#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	/*ifstream in;
	in.open("text.txt");
	if (!in)
	{
		cerr << "��ʧ��" << endl;
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
		cerr << "��ʧ��" << endl;
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
//app  trunkɾ��ԭ��  nocreate�����ڲ�����  noreplece�Դ��ڣ�ʹ��open���ش���
//*p.seekg(ios::beg);ָ��ؿ�ͷ