#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int fun(char* p, int* n)
{
	if (p == NULL || n == NULL)
	{
		return -1;
	}
	int begin = 0;
	int end = strlen(p) - 1;
	//����߿�ʼ
	//�����ǰ�ַ�Ϊ�գ�����û�н���
	while (isspace(p[begin]) && p[begin] != 0)
	{
		begin++;//λ�ô����ƶ�һλ
	}
	//���ұ߿�ʼ
	//�����ǰ�ַ�Ϊ�գ�����û�н���
	while (isspace(p[end]) && p[end] != 0)
	{
		end--;//λ�ô����ƶ�һλ
	}
	*n = end - begin + 1;
	return 0;
}

int main(void)
{
	char *p = "      dsadasa        ";
	//int begin = 0;
	//int end = strlen(p) - 1;
	int n = 0;
	int ret = 0;

	ret = fun(p, &n);
	if (ret != 0)
	{
		return ret;
	}
	printf("n=%d\n",n);

	////����߿�ʼ
	////�����ǰ�ַ�Ϊ�գ�����û�н���
	//while (isspace(p[begin]) && p[begin]!=0)
	//{
	//	begin++;//λ�ô����ƶ�һλ
	//}
	////���ұ߿�ʼ
	////�����ǰ�ַ�Ϊ�գ�����û�н���
	//while (isspace(p[end]) && p[end] != 0)
	//{
	//	end--;//λ�ô����ƶ�һλ
	//}
	//n = end - begin + 1;
	//printf("n=%d\n",n);


	printf("\n");
	system("pause");
	return 0;
}