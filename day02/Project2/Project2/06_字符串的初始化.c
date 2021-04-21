#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	/*
	* c语言没有字符串类型，通过字符数组模拟
	* C语言字符串,以字符'\0'，数字0
	*/
	//不指定长度,没有0结束符，有多少个元素就有多长
	char buf[] = { 'a','b','c','\0' };
	printf("buf=%s\n",buf);

	//指定长度，后面没有赋值的元素自动补零
	char buf2[100] = { 'a','b','c' };
	printf("buf2=%s\n", buf2);

	//所有元素赋值为0
	char buf3[100] = { 0 };

	//使用字符串初始化，常用
	char buf8[] = "dadsadasda";
	//strlen:测字符串长度，不包含数字0，字符'\0'
	//sizeof:测数组长度，包含数字0，字符'\0'
	printf("buf8:%d\n", buf8[strlen(buf8)]);//空字符，值0

	printf("strlen=%d,sizeof=%d\n",strlen(buf8),sizeof(buf8));
	char buf9[100] = "dadsadasda";
	printf("strlen=%d,sizeof=%d\n", strlen(buf9), sizeof(buf9));

	printf("test");
	char str[] = "\0129";
	printf("%s\n",str);

	system("pause");
	return 0;
}