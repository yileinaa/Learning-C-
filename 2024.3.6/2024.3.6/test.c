//#include <iostream>
//using namespace std;
#define _CRT_SECURE_NO_WARNINGS 1
//���ã���һ���ļ����Ƶ�����һ���ļ�
// �ҵĳ����������fileCopy.c
//ʹ�÷��������ļ�������exe��β���ļ�(��Ҫ�����Ѿ�д�겢�Լ�����exe�ļ�)(���ҵ�Ϊ����fileCopy.exe)�����򿪣�Ȼ������:fileCopy sourcefile destfile(sourcefile:�����Ƶ��ļ��� destfile��������sourcefile�����ݵ��ļ�)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* in, * out;//ע����ļ�����Ҫ���ļ�ָ��
	int ch;//ע����int��������char,��Ϊgetc�ķ���ֵ��int���ͣ�������char

	if (argc != 3)//ȷ��������������ȷ��
	{
		fprintf(stderr, "�밴��ȷ��ʽ���룺filecopy.exe Դ�ļ��� Ŀ���ļ���\n");//һ������������fileCooy.exe Դ�ļ��� Ŀ���ļ���
		exit(EXIT_FAILURE);
	}

	if ((in = fopen(argv[1], "rb")) == NULL)//������д��
	{
		fprintf(stderr, "�򲻿��ļ���%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((out = fopen(argv[2], "wb")) == NULL)//�����ƶ�ȡ
	{
		fprintf(stderr, "�򲻿��ļ���%s\n", argv[2]);
		fclose(in);/*��ס�ر��ļ�*/
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(in)) != EOF)
	{
		if (putc(ch, out) == EOF)
			break;
	}

	if (ferror(in))//����Ƿ�����Ϊ�������
	{
		fprintf(stderr, "��ȡ�ļ�����%s\n", argv[1]);
		fclose(in);
		exit(EXIT_FAILURE);
	}

	if (ferror(out))//����Ƿ�����Ϊ�������
	{
		fprintf(stderr, "д���ļ�����%s\n", argv[2]);
		fclose(in);
		exit(EXIT_FAILURE);
	}

	printf("�����ļ��ɹ�\n");
	fclose(in);
	fclose(out);

	return 0;
}

