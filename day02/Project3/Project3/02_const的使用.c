#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	//const����һ������Ϊֻ��
	const int a = 10;
	//a = 100;//error
	//ָ�������ָ��ָ����ڴ�,2����ͬ����
	char buf[] = "dadsadsadaweq";
	//�������ҿ����������ͣ��������ĸ��ַ�
	//�����*��˵��ָ��ָ����ڴ治�ܸı�
	//�����ָ�������˵��ָ���ָ���ܸı䣬ָ���ֵ�����޸�
	const char* p = buf;
	//�ȼ�������char const *p1=buf;
	//p[1] = '1';//error
	p = "dasd232";//ok

	char* const p2 = buf;
	p2[0] = '1';//ok
	//p2 = "dadsa";//error

	const char* const p2 = buf;


	system("pause");
	return 0;
}