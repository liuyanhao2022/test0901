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

//int main()//最多输入三次密码，三次都错误，退出程序
//{
//	printf("登录请输入密码：>");
//	char PassWord[20] = "12345abc";
//	char UserPassWord[20] = "0";
//	int i = 1;
//	
//	
//	while (i < 4)
//	{
//		scanf("%s", UserPassWord);
//		if (strcmp(UserPassWord,PassWord) == 0)//strcmp 比较两个字符串，相等返回0
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else if (i < 3)
//		{
//			i++;
//			printf("密码错误，请重新输入：>");
//		}
//		else
//		{
//			printf("三次密码输入错误，程序退出");
//				break;
//		}
//		
//	}
//	return 0;
//}

//09.20学习
//猜数字游戏
//生成1个1-100的随机数，猜对了，可以继续选择玩，猜错了，继续猜

//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("########################\n");
//	printf("###### 猜数字游戏 ######\n");
//	printf("########################\n");
//	printf("*                      *\n");
//	printf("************************\n");
//	printf("******   1.开始    *****\n");
//	printf("******   0.退出    *****\n");
//	printf("************************\n");
//}

//void game()//猜数字游戏的实现
//{
//	//1.生成随机数
//	//rand 函数生成一个0-32767之间的数
//	int ret = rand()%100+1;//%100的余数是0-99，再加1就是，1-100
//	int guess = 0;
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//	
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间戳
//	do
//	{
//		menu();//打印菜单
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:	
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//2022.09.28
//F10---逐过程
//F11---逐语句，调用函数的也可以监视

//int main()//求3个输入值的从大到小输出(方法一)
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c = b;
//		b = c;
//	}
//	printf("这三个数字从大到小的顺序是：%d %d %d", a, b, c);
//	return 0;
//}

//2022.09.29
//求3个输入值的从大到小输出(方法二)使用函数
//void comp(int* ptmp1, int* ptmp2)
//{
//	if (*ptmp1 < *ptmp2)
//	{
//		int big = *ptmp2;
//		*ptmp2 = *ptmp1;
//		*ptmp1 = big;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	comp(&a, &b);
//	comp(&a, &c);
//	comp(&b, &c);
//	printf("这三个数字从大到小的顺序是：%d %d %d", a, b, c);
//	return 0;
//}

////打印0-100之间3的倍数
//int main()
//{
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//求两个数值的最大公约数(方法一)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = a > b ? b : a;
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("这两个数的最大公约数是：%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//求两个数值的最大公约数(方法二)
//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = 0;
//	while (max = a % b)
//	{
//		a = b;
//		b = max;
//	}
//	printf("这两个数的最大公约数是：%d", b);
//	return 0;
//}

//计算1000-2000年之间的闰年(方法一)
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		//1.能被4整除，不能被100整除是闰年
//		//2.能被400整除是闰年
//		if (0 == year % 4)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if (0 == year % 400)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncont = %d", count);
//	return 0;
//}

//计算1000-2000年之间的闰年(方法二)
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
////		//1.能被4整除，不能被100整除是闰年
////		//2.能被400整除是闰年
//		if (((year % 4 ==0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//判断100-200之间的素数
//素数=质数，只能被1和他本身整除
// 方法一
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for ( b = 100; b < 200; b++)
//	{
//		for ( a = 2; a < b; a++)//产生2到b-1之间的数字,
//		{
//			if (b % a == 0)//试验b除以2到b-1之间的数
//			{
//				break;
//			}
//		}
//		if (a == b)
//		{
//			count++;
//			printf("%d ", b);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

// 方法二
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for ( b = 100; b < 200; b++)
//	{
//		int flag = 1;
//		for ( a = 2; a < b; a++)//产生2到b-1之间的数字,
//		{
//			if (b % a == 0)//试验b除以2到b-1之间的数
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", b);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//方法三
//优化后
//m = a * b
//a和b中一定至少有一个数字是 <= 开平方m的
//16 = 2 * 8 = 4 * 4

//sqrt  是开平方函数   使用 math.h
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (b = 100; b < 200; b++)//可以再优化成 for (b = 100; b < 200; b+=2)
//	{
//		int flag = 1;
//		for (a = 2; a <= sqrt(b); a++)//产生2到之间的数字,
//		{
//			if (b % a == 0)//试验b除以2到b-1之间的数
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", b);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//2022.09.30
//1.关机
//执行程序，1分钟后关机，输入 你很厉害 取消关机
//C语言提供 system() 来执行系统命令  使用stdlib.h

//使用goto语句
//goto 跳转语句，跳转到后面的标签，只能再一个函数范围内跳转，不能跨函数，
//一般只用于多层嵌套中，跳转
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//设置60秒关机
//
//	again://标签后分号
//	printf("你的电脑1分钟后关机，如果输入： 你很厉害  ，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input ,"你很厉害") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//goto 跳转语句，跳转到后面的标签，
//	}
//	return 0;
//}

////2.库函数
////参考网站 www.cplusplus.com
////C++官方网站，http://zh.cppreference.com
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//2022.10.3
//自定义函数，参考库函数，有返回值的类型，需要传入的参数
//取最大值函数，比较两个值，输出最大值
//int 是返回值类型，get_max（int x , int y）是自定义的函数名，int x int y 指的接受数据类型
//z为返回值
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x>y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("MAX是：%d", max);
//	return 0;
//}

//2022.10.04
//自定义函数
// 函数返回类型的地方写出： void，表示这个函数不返回任何值，也不需要返回
//交换两个整型变量，错误写法,没有传入变量的地址，导致函数达不到对应的效果

//Swap1在被调用的时候，实参传给形参，其实形参就是实参的一份临时拷贝
// 改变形参，不能改变实参
//void Swap1(int x, int y)//只是把a和b的值传过来了，重新创建新的空间x,y，不会对主函数中的a,b造成影响
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap1(a, b);//传值调用
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//指针变量示例
//int main()
//{
//	int a = 10;//创建4个字节的空间
//	int* pa = &a;//pa就是一个指针变量，对应a的内存地址,int*代表着这是一个指针变量
//	*pa = 20;//*pa 等同于int a ，*pa通过指针变量直接可以对int a进行操作
//	printf("a:%d\n", a);
//	return 0;
//}

//改良后，使用指针变量解决
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);传址调用
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//实际参数（实参）
//真实传给函数的参数，叫实参，可以是：常量，变量，表达式，函数等。
//进行函数调用时，都必须有确定的值，一边把这些值传送给形参。
//例如上个程序中，主程序中的  Swap(&a, &b);  其中 &a和&b就是实参

//形式参数（形参）
//形式参数是指函数名后括号中的变量，因为形参只有在函数调用的过程中实例化（内存单元），所以叫形式参数。
//形参当函数调用完成之后就自动销毁了，因此形参只在函数中有效
//例如上个程序中，void Swap(int* pa, int* pb)    其中int* pa 和int* pb 就是形参

//函数的调用：
//1.传值调用
//		函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参
//2.传址调用
//		*传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//		*这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作
//		 函数外部的变量

//使用函数打印出100~200之间的质数
//#include <math.h>
//
//int is_prime(int b)
//{
//	for (int i = 2; i <= sqrt(b); i++)
//	{
//		if (b % i == 0)
//		{
//			return 0;
//		}
//		
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for ( a = 100; a <= 200; a++)
//	{
//		if (is_prime(a) == 1)//传值调用
//		{
//			count++;
//			printf("%d ", a);
//		}
//	}
//	printf("\ncount : %d", count);
//	return 0;
//}

//2022.10.05
//编写自定义函数，判断是否为闰年，是返回1，不是返回0
//int is_leap_year(int a)
//{
//	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	for (int y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//一个函数不写返回类型，默认返回int类型
//简化后
//int is_leap_year(int a)
//{
//	return (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0));
//}

//编写自定义函数，在一个有序数组中，使用二分法查找
//找到返回下标，找不到返回-1
//int binary_search(int a[], int b, int c)
//{
//	int left = 0;
//	int right = c - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > b)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < b)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组arr传参，实际上传递的不是数组的本身
//	//仅仅传过去了数组首元素的地址
//	int ret = (binary_search(arr, k, sz));
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("查找的下标为：%d", ret);
//	}
//	return 0;
//}

//2022.10.21学习
//递归，思路大事化小
//递归，求n的阶乘
//int is_n_dedigui(int a)
//{
//	int b = 0;
//	if (a != 1)
//	{
//		b = a * is_n_dedigui(a - 1);
//		return b;
//	}
//	else
//		return a;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", & n);
//	int c = is_n_dedigui(n);
//	printf("n的阶乘是：%d", c);
//	return 0;
//}

//2023.02.24
//函数调用分为两种，一.嵌套调用。二.链式访问
//嵌套调用，函数内调用，其他函数
//链式访问，把一个函数的返回值当作另外一个函数参数
// 
//嵌套调用
//void t1()
//{
//	printf("就这样\n");
//}
//
//void t2()
//{
//	t1();
//}
//
//int main()
//{
//	t2();
//	return 0;
//}

//链式访问
int main()
{
	char s[] = "你好啊";
	char ds[20] = { 0 };
	printf("%s\n", strcpy(ds, s));
	return 0;
}