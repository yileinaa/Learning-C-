#include <iostream>//无可用内存空间new抛出std::bad_alloc
#include <string>
using namespace std;
//动态数组
int main()
{
	unsigned int count = 0;
	cout << "请输入数组个数\n";
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
}//c语言只能常量范围数组