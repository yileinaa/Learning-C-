//#include <stdio.h>
//
//int main()
//{
//	int num=0;
//	int sum=0;
//	char ch;
//	int n;
//	while(scanf("%d", &num)==1)
//	{
//		sum += num;
//		while ((ch = getchar()) == ' ')
//			;
//		if (ch == '\n')
//		{
//			break;
//		}
//		ungetc(ch, stdin);//�˻ظ�������
//	}
//	printf("%d", sum);//\n�س�
//	return 0;
//}//C
#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	cout << "���������������ո�";
	int i;
	while(cin>>i)
	{
		sum += i;
		while (cin.peek() == ' ')
		{
			cin.get();
		}
		if (cin.peek() == '\n')
		{
			break;
		}
	}
	cout << "�����" << sum << endl;
	return 0;
}//C pp