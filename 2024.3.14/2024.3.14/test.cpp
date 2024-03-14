#include <iostream>
#include <string>
using namespace std;
//强制类型转换
//父类指针可以指子类对象；子类指针不能指向父类对象，也不能传给父类指针
//用括号强制转换
//dynamic_cast<子类指针*>(父类指针变量),失败返回NULL
int main()
{
	int* x;
	x = new int[2000];//此处内存泄漏
	x = new int[3000];
	delete[]x;
	x = NULL;
	//函数中临时变量指针需要释放
}