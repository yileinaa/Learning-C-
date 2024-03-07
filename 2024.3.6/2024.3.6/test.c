//#include <iostream>
//using namespace std;
#define _CRT_SECURE_NO_WARNINGS 1
//作用：将一个文件复制到另外一个文件
// 我的程序代码名：fileCopy.c
//使用方法：在文件中找以exe结尾的文件(需要代码已经写完并自己生成exe文件)(以我的为例：fileCopy.exe)，并打开，然后输入:fileCopy sourcefile destfile(sourcefile:被复制的文件名 destfile：复制了sourcefile的内容的文件)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* in, * out;//注意对文件操作要用文件指针
	int ch;//注意是int，而不是char,因为getc的返回值是int类型，而不是char

	if (argc != 3)//确保参数个数的正确性
	{
		fprintf(stderr, "请按正确格式输入：filecopy.exe 源文件名 目标文件名\n");//一共三个参数：fileCooy.exe 源文件名 目标文件名
		exit(EXIT_FAILURE);
	}

	if ((in = fopen(argv[1], "rb")) == NULL)//二进制写入
	{
		fprintf(stderr, "打不开文件：%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((out = fopen(argv[2], "wb")) == NULL)//二进制读取
	{
		fprintf(stderr, "打不开文件：%s\n", argv[2]);
		fclose(in);/*记住关闭文件*/
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(in)) != EOF)
	{
		if (putc(ch, out) == EOF)
			break;
	}

	if (ferror(in))//检查是否是因为错误结束
	{
		fprintf(stderr, "读取文件错误：%s\n", argv[1]);
		fclose(in);
		exit(EXIT_FAILURE);
	}

	if (ferror(out))//检查是否是因为错误结束
	{
		fprintf(stderr, "写入文件错误：%s\n", argv[2]);
		fclose(in);
		exit(EXIT_FAILURE);
	}

	printf("复制文件成功\n");
	fclose(in);
	fclose(out);

	return 0;
}

