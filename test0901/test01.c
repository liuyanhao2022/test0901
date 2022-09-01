#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*printf("c:\test\test");
//	printf("\nc:\\test\\test");
//	printf("\n(are you ok??)");
//	printf("%s\n","\"");
//	printf("%s\n","abc\b");
//	printf("\n\nabc\r");
//	printf("\v\v\v");*/
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}


//2022.09.03学习
//1.函数使用，其中Add是创建的函数，Add名称可以换成其他的名称
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int num = num1 + num2;
//	//函数方式解决
//	int num = Add(num1, num2);
//	printf("%d\n", num);
//	return 0;
//}
//2.数组的使用
//一组相同类型的元素的集合
//数组使用下标访问
//int main()
//{
//	int arr[10] = { 1,2,2,3,4,5,6,7,8,9 };//创建数组arr一共10个数{}中为对应的数值
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	char ch[5] = {'a','b'};//创建数组ch一共5个字符，只有两个，不完全初始化，剩余的都默认为0
//	return 0;
//}
//3.运算符
// /%取余 ，/除 计算浮点数时，两个数最少一个数代小数点，计算结果才会正确。
//int main()
//{
//	//int a = 9 / 2;
//	//printf("%d", a);两个整数相除，结果为商 整数，不带小数
//	//float a = 9 / 2;
//	//printf("%f", a);//两个整数相除，结果为4.0
//	float a = 9 / 2.0;
//	printf("%f", a);//两个数相除，其中有一个为浮点数，结果为4.5
//
//	return 0;
//}
//  <<左移操作符，相当于把一个二进制数向左移动对应的位数，超出的舍弃，新增的补零
//
//sizeof 是一个操作符，不是函数，计算类型或者变量大小,单位字节
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}