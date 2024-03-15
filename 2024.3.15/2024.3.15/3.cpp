//内联模板inline
//内联函数，编译时直接替换
#include <iostream>
template <class T,class U>
class Stack
{
public:
	Stack(unsigned int size = 100)
	{
		this->size = size;
		data = new T;
		sp = 0;
	}
	~Stack()
	{
		delete []data;
	}
	void push(T value)
	{
		data[sp++] = value;
	}
	T pop()
	{
		return data[--sp];
	}
private:
	unsigned int size;
	unsigned int sp;
	T* data;
};

int main()
{
	Stack<int>intStack(100);
	intStack.push(1);
	intStack.push(2);
	intStack.push(3);
	std::cout << intStack.pop() << "\n";
	std::cout << intStack.pop() << "\n";
	std::cout << intStack.pop() << "\n";
	return 0;
}