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
// 
// 
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
// 
// 
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

 // ~按位取反，二进制
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}
// 整数a=0  ,~a=-1
//    a二进制标示：00000000000000000000000000000000
//   ~a二进制标示：11111111111111111111111111111111
//整数在内存中储存的是补码
//一个整数的有3中二进制表示方法
//原码
//反码
//补码
// 
// 正整数的原码，反码，补码都一样
// 
// 针对负数计算
//例如：  -1
//原码：100000000000000010000000000000001
//										 符号位不变，其他位取反   （换算关系）
//反码：111111111111111111111111111111110
//										 补码+1						（换算关系）
//补码：111111111111111111111111111111111

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，后++
//	printf("%d\n", b);//b=10
//	printf("%d\n", a);//a=11
//
//	int c = 10;
//	int d = ++c;//前置++，先++，后使用
//	printf("%d\n", d);//d=11
//	printf("%d\n", c);//c=11
//	return 0;
//}

//int main()
//{
//	//(int)强制转换成int
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//三目运算符  ? :
//和if else 有点像
//exp1 ? exp2 : exp3;
//exp1为真，计算exp2,整个表达式结果为exp2的结果
//exp1为假，计算exp3,整个表达式结果为exp3的结果
//int main()
//{
//	int a = 2;
//	int b = 6;
//	int max = 0;
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	printf("%d\n", max);
//
//	int c = 2;
//	int d = 6;
//	int max1 = 0;
//	int max1 = a > b ? a : b;
//	printf("%d\n", max1);
//	return 0;
//}

//逗号表达式	（exp1,exp2,exp3,...expn)
//从左开始计算，整个表达式结果是最后一个表达式结果
int main()
{
	int a = 3;
	int b = 8;
	int c = 4;
	int d = (a = b - c, b = a + 2, c = a + b);
	printf("%d\n", d);
	return 0;
}
