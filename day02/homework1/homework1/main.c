#include<stdio.h>

char *get_mem(int size)
{
	char* p2 = NULL;//����4���ֽڵ��ڴ� ջ��Ҳ����ʱ��
	p2 = (char*)malloc(size);
	return p2;
}

int main(void)
{
	char buf[100];
	int a = 10;//����4���ֽڵ��ڴ� ջ��Ҳ����ʱ��
	int* p;//����4���ֽڵ��ڴ� 

	p = &a;
	*p = 20;

	char* mp = get_mem(100);
	strcpy(mp, "ABCDEF");

	printf("a=%d\n",a);
	printf("&a=%p\n", &a);
	printf("p=%p\n",p);

	if (mp != NULL)
	{
		printf("before=%d\n",mp);

		free(mp);//����ϵͳ��mpԭ��ָ����ڴ���Ա�����ʹ��

		printf("before=%d\n", mp);
		//�ͷ��꣬mp����Ұָ�룬���Ǳ���֮ǰ�ĵ�ַ����ø�ְΪNULL
		mp = NULL;
	}

	return 0;
}