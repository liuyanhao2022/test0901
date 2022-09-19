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
//int main()
//{
//	int a = 3;
//	int b = 8;
//	int c = 4;
//	int d = (a = b - c, b = a + 2, c = a + b);
//	printf("%d\n", d);
//	return 0;
//}

//2022.09.04学习
//1.下标引用操作符，在数组中[],从零开始，
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	printf("%d\n", arr[4]);//打印数组中第五个元素
//	return 0;
//}

//2.函数调用操作符    （）
//int main()
//{
//	printf("100");//调用函数时，函数名后的（）就时函数调用操作符
//	return 0;
//}

//关键字
//auto 自动		每个局部变量都是用auto修饰的，变量自动创建，自动销毁。
//新C语言也有其他用法
//extern		申明外部符号的
//register		寄存器关键字	为了提高处理效率
//int main()
//{
//	register int a = 19;//建议放在寄存器中
//	return 0;
//}
// 计算机储存方式
//CPU从寄存器中取值							寄存器			空间很小，速度快
//											高速缓存		几十MB
//											内存			8G-32G
//											硬盘
//											网盘

//signed	有符号的
//unsigned	无符号的
//static		静态的
//union			联合体（共用体）
//void		无

//09.12学习
//while 循环中，break用于永久的终止循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)//i==5，时跳出循环
//		{
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//while循环中，continue的作用跳过本次continue后的代码，直接回到判断部分，看是否进行下一次循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//getchar	获取一个字符，标准输入，键盘上
//EOF(end 0f file)	文件结束标志，键盘上按 ctrl+z,相当与EOF
//putchar	输出一个字符
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char PassWord[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", PassWord);
//	//清理缓存区，直到读到\n，相当于回车
//	int tmp = 0;
//	while ((tmp = getchar()) !='\n')
//	{
//		;
//	}
//	printf("再次确认密码(Y/N)：>");
//	int ch = 0;
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}

//09.19学习
//do
//{
//
//} while (true);先执行一次循环体，再判断while的表达式，如果为假，则结束循环
//int main()//输出1-10
//{
//	int a = 1;
//	do
//	{
//		printf("%d ", a);
//			a++;
//	} while (10 >= a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	do
//	{
//		if ( 6 == a )//a==6,跳出当前循环
//		{
//			break;
//		}
//		printf("%d ", a);
//			a++;
//	} while (10 >= a);
//	return 0;
//}
// 
//int main()
//{
//	int a = 1;
//	do
//	{
//		if ( 6 == a )//a==6,省略后面的循环部分
//		{
//			continue;
//		}
//		printf("%d ", a);
//			a++;
//	} while (10 >= a);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 1;
//	scanf("%d",&b);
//	for ( a = 1; a <= b; a++)
//	{
//		c *= a;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//计算1-10的阶乘和
//int main()//方法一
//{
//	int a = 0;
//	int b = 0;
//	int d = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		int c = 1;
//		for (b = 1; b <= a; b++)
//		{
//			c *= b;
//			
//		}
//		d = c + d;
//	}
//	printf(" % d\n", d);
//	return 0;
//}

//二分法，求一个有序数组的中的某个值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int k = 8;//要查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组中元素的个数；
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right )
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//打印一串字符，从两边向中间显示
//int main()
//{
//	char arr1[] = "welcome to china";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s",arr2);
//		Sleep(1000);//休眠1秒钟
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}

int main()
{
	printf("登录请输入密码：>");
	char PassWord[] = "1,2,3,4,5,a,b,c";
	char UserPassWord[] = "0";
	int i = 1;
	
	
	while (i < 4)
	{
		scanf("%s", &UserPassWord);
		if (UserPassWord == PassWord)
		{
			printf("密码正确，登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入");
				i++;
		}
	}
	return 0;
}