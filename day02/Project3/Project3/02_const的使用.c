#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	//const修饰一个变量为只读
	const int a = 10;
	//a = 100;//error
	//指针变量，指针指向的内存,2个不同概念
	char buf[] = "dadsadsadaweq";
	//从左往右看，跳过类型，看修饰哪个字符
	//如果是*，说明指针指向的内存不能改变
	//如果是指针变量，说明指针的指向不能改变，指针的值不能修改
	const char* p = buf;
	//等价于上面char const *p1=buf;
	//p[1] = '1';//error
	p = "dasd232";//ok

	char* const p2 = buf;
	p2[0] = '1';//ok
	//p2 = "dadsa";//error

	const char* const p2 = buf;


	system("pause");
	return 0;
}