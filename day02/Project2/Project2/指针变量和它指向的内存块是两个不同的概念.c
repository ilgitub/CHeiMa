#include<stdio.h>

int main(void)
{

	char* p = NULL;
	char buf[] = "abcdef";
	
	printf("p1=%d\n",p);
	printf("p1=%p\n", p);

	//�ı�ָ�������ֵ
	p = buf;
	printf("p2=%d\n", p);
	printf("p2=%p\n", p);

	printf("p3=%c\n",*p);

	printf("-----------------------\n");

	//ָ�������ָ����ڴ���������ͬ�ĸ���
	p = p + 1;//�ı���ָ�������ֵ���ı���ָ���ָ��
	printf("p2=%d\n",p);
	printf("buf=%s\n",buf);
	printf("*p=%c\n",*p);

	//�ı�ָ��ָ����ڴ棬������Ӱ��ָ���ֵ
	printf("-----------------------\n");
	buf[1] = '1';
	printf("p4=%d\n",p);
	printf("buf2=%s\n",buf);
	printf("*p=%c\n", *p);
	printf("------------------------------\n");

	*p = 'm';
	printf("p5=%d\n",p);
	printf("buf3=%s\n",buf);

	printf("\n");
	system("pause");
	return 0;
}