#include<stdio.h>
#include<stdlib.h>

int get_b()
{
	int a = 10;
	return a;
}

void get_a2(int b)
{
	b = 22;
}

void get_a3(int* p)
{
	*p = 33;
}

void fun2(int* p)
{
	p = 0xaabb;
	printf("fun2:p=%p\n",p);
}
void fun3(int** p)
{
	*p = 0xaabb;
	printf("fun3:p=%p\n", p);
}

int main(void)
{
	/*
	* ͨ��ָ���Ӹ�ֵ
	* 1����������
	* 2��������ϵ
	* 3��ͨ��*�����ڴ�
	*/
	//int a = 100;
	//int* p = NULL;

	//p = &a;
	//*p = 22;
	//printf("a=%d\n",a);
	//printf("*p=%d\n", *p);

	//int b = get_b();
	//printf("b=====%d\n",b);

	//get_a2(b);
	//printf("b2=====%d\n", b);

	////�����ͨ���βθı�ʵ�ε����ݣ������ַ����
	//get_a3(&b);
	//printf("b3=====%d\n", b);

	int* p = 0x1122;
	printf("p1=%p\n", p);

	fun2(p);//ֵ����
	printf("p2=%p\n",p);

	printf("\n---------------------\n");

	fun3(&p);//��ַ����
	printf("p3=%p\n", p);

	system("pause");
	return 0;
}