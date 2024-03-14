#include <iostream>//无可用内存空间new抛出std::bad_alloc
#include <string>
using namespace std;
//动态数组
int main()
{
	unsigned int count = 0;
	cout << "请输入数组个数\n";
	cin >> count;
	int* x = new int[count];//函数中使用结束后不会自动删除内存
	for (int i = 0; i < count; i++)
	{
		x[i] = i;
	}
	for (int i = 0; i < count; i++)
	{
		cout << "x[" << i << "]的值" << x[i] << "\n";
	}
	delete x;
	x = NULL;
}//c语言只能常量范围数组