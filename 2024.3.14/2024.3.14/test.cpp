#include <iostream>
#include <string>
using namespace std;
//ǿ������ת��
//����ָ�����ָ�����������ָ�벻��ָ�������Ҳ���ܴ�������ָ��
//������ǿ��ת��
//dynamic_cast<����ָ��*>(����ָ�����),ʧ�ܷ���NULL
int main()
{
	int* x;
	x = new int[2000];//�˴��ڴ�й©
	x = new int[3000];
	delete[]x;
	x = NULL;
	//��������ʱ����ָ����Ҫ�ͷ�
}