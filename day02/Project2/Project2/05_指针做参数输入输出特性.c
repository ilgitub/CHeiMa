#include<stdio.h>
#include<stdlib.h>

void func(char* p)//in
{
	//��pָ����ڴ����򿽱�
	strcpy(p,"dadsadsadsa");
}

void func2(char* p)//in
{
	if (NULL == p)
	{
		return;
	}
	//��pָ����ڴ����򿽱�
	strcpy(p, "dadsadsadsa");
}

void func3(char** p,int *len)
{
	if (NULL == p)
		return;

	char* tmp = (char *)malloc(100);
	if (NULL == tmp)
		return;
	strcpy(tmp, "dasdassa");
	//��Ӹ�ֵ
	*p = tmp;
	*len = strlen(tmp);
}

int main(void)
{
	//���룬�������������ڴ�
	char buf[100] = { 0 };
	func(buf);
	printf("buf=%s\n",buf);

	char* str = NULL;
	func2(str);//Ұָ��

	//���,�����ú��������ڴ�,��ַ����
	char* p = NULL;
	int len = 0;
	func3(&p,&len);
	if (p != NULL)
	{
		printf("p=%s,len=%d\n",p,len);
	}

	system("pause");
	return 0;
}