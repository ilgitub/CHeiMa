#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	//д�ڴ�ʱ��һ��Ҫȷ���ڴ��д
	char* buf2 = "sdasdsa";//���ֳ��������ڴ治�ɸ�
	//buf2[2] = '1';//error

	char buf3[] = "dsadsa";
	buf3[1] = '1';//ok

	char* p3 = NULL;
	strcpy(p3,"1111");//error

	system("pause");
	return 0;
}