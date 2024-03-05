#include <iostream>

using namespace std;

int Add(int* arr, int n)
{
	int sum = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int data[] = { 0,1,2,3,4,5,6,7,8,9 };
	int size = sizeof(data) / sizeof(data[0]);
	cout << "½á¹ûÊÇ:" << Add(data, size) << endl;
	return 0;
}