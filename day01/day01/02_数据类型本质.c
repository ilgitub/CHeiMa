#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a;
	int b[10];
	//b��&b�������Ͳ�һ��
	//b��������Ԫ�صĵ�ַ��һ��Ԫ��4���ֽ�
	//&b����������׵�ַ��һ������4*10=40�ֽ�,+1��+40
	printf("sizeof(a)=%d,sizeof(b)=%d\n",sizeof(a),sizeof(b));
	printf("b:%d,&b:%d\n",b,&b);
	printf("b+1:%d,&b+1:%d\n", b+1, &b+1);

	//ָ�����ͳ���,32λ����,����4
	//            64λ���򣬳���8
	char************************** p = NULL;
	int* q = NULL;
	printf("%d, %d\n",sizeof(p),sizeof(q));

	printf("\n");
	system("pause");
	return 0;
}