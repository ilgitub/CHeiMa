#include<stdio.h>
#include<stdlib.h>

typedef struct MyStruct
{
	int a;
	int b;
}MyStruct;

void fun(MyStruct* p)
{
	//ָ���ܱ�
	//ָ��ָ����ڴ�Ҳ���Ա�
	//p = NULL;
	p->a = 10;//ok
}

void fun1(MyStruct const* p)
{
	//p=NULL;//ok
	//p->a = 10;//err
}

void fun3(MyStruct* const p)
{
	//p = NULL;//err
	p->a = 1;//ok

}

void fun4(const MyStruct* const p)
{
	//p = NULL;//err
	//p->a=10;//err
	MyStruct tmp;
	tmp.a = p->a;//pֻ��
}

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

	//p3Ϊֻ����ָ���ܱ䣬ָ����ڴ�Ҳ���ܱ�
	const char* const p3 = buf;
	//p3[0] = '1';//error
	//p3 = "dsad";//error

	//�����������.c�е�const����
	extern const int ac;//���ܸ�ֵֻ������
	printf("a=%d\n",ac);

	system("pause");
	return 0;
}