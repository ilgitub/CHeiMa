#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* get_str1()
{
	char* p = "abcde";//���ֳ�����
	return p;
}
char* get_str2()
{
	char* q = "abcde";//���ֳ�����
	return q;
}

int main(void)
{
	char* p = NULL;
	char* q = NULL;

	//%sָ��ָ���ڴ���������ݣ�%d��ӡp�����ֵ
	p = get_str1();
	printf("p= %s\,p= %d\n",p,p);

	q = get_str2();
	printf("q= %s\,q= %d\n", q, q);

	system("pause");
	return 0;
}