//����
#include <iostream>
#include <algorithm>
#include <vector>//��������//��׼��
//������iterator,����ָ�룬��������
int main()
{
	std::vector<std::string>names;
	names.push_back("lol");
	names.push_back("olo");
	names.push_back("sal");
	names.push_back("wqc");
	names.push_back("ghf");
	names.push_back("zxc");
	names.push_back("hhr");
	std::sort(names.begin(), names.end());
	std::vector<std::string>::iterator iter = names.begin();
	while (iter != names.end())
	{
		std::cout << *iter << "\n";
		++iter;
	}
	/*for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i] << "\n";
	}*/
}//names[0]="jonny"�滻