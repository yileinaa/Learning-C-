#include <iostream>//�޿����ڴ�ռ�new�׳�std::bad_alloc
#include <string>
using namespace std;
//��̬����
int main()
{
	unsigned int count = 0;
	cout << "�������������\n";
	cin >> count;
	int* x = new int[count];
	for (int i = 0; i < count; i++)
	{
		x[i] = i;
	}
	for (int x = 0; i < count; i++)
	{
		cout << "x[" << i << "]" << x[i] << "\n";
	}
}//c����ֻ�ܳ�����Χ����