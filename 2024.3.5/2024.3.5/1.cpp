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
//		ungetc(ch, stdin);//退回给输入流
//	}
//	printf("%d", sum);//\n回车
//	return 0;
//}//C
#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	cout << "请输入任意整数空格";
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
	cout << "结果是" << sum << endl;
	return 0;
}//C pp