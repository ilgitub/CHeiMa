#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	/*
	* c����û���ַ������ͣ�ͨ���ַ�����ģ��
	* C�����ַ���,���ַ�'\0'������0
	*/
	//��ָ������,û��0���������ж��ٸ�Ԫ�ؾ��ж೤
	char buf[] = { 'a','b','c','\0' };
	printf("buf=%s\n",buf);

	//ָ�����ȣ�����û�и�ֵ��Ԫ���Զ�����
	char buf2[100] = { 'a','b','c' };
	printf("buf2=%s\n", buf2);

	//����Ԫ�ظ�ֵΪ0
	char buf3[100] = { 0 };

	//ʹ���ַ�����ʼ��������
	char buf8[] = "dadsadasda";
	//strlen:���ַ������ȣ�����������0���ַ�'\0'
	//sizeof:�����鳤�ȣ���������0���ַ�'\0'

	printf("strlen=%d,sizeof=%d\n",strlen(buf8),sizeof(buf8));
	char buf9[100] = "dadsadasda";
	printf("strlen=%d,sizeof=%d\n", strlen(buf9), sizeof(buf9));

	system("pause");
	return 0;
}