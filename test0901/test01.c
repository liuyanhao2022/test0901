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
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}


//2022.09.03ѧϰ
//1.����ʹ�ã�����Add�Ǵ����ĺ�����Add���ƿ��Ի�������������
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
//	//������ʽ���
//	int num = Add(num1, num2);
//	printf("%d\n", num);
//	return 0;
//}
// 
// 
//2.�����ʹ��
//һ����ͬ���͵�Ԫ�صļ���
//����ʹ���±����
//int main()
//{
//	int arr[10] = { 1,2,2,3,4,5,6,7,8,9 };//��������arrһ��10����{}��Ϊ��Ӧ����ֵ
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	char ch[5] = {'a','b'};//��������chһ��5���ַ���ֻ������������ȫ��ʼ����ʣ��Ķ�Ĭ��Ϊ0
//	return 0;
//}
// 
// 
//3.�����
// /%ȡ�� ��/�� ���㸡����ʱ������������һ������С���㣬�������Ż���ȷ��
//int main()
//{
//	//int a = 9 / 2;
//	//printf("%d", a);����������������Ϊ�� ����������С��
//	//float a = 9 / 2;
//	//printf("%f", a);//����������������Ϊ4.0
//	float a = 9 / 2.0;
//	printf("%f", a);//�����������������һ��Ϊ�����������Ϊ4.5
//
//	return 0;
//}
//  <<���Ʋ��������൱�ڰ�һ���������������ƶ���Ӧ��λ���������������������Ĳ���
//
//sizeof ��һ�������������Ǻ������������ͻ��߱�����С,��λ�ֽ�
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

 // ~��λȡ����������
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}
// ����a=0  ,~a=-1
//    a�����Ʊ�ʾ��00000000000000000000000000000000
//   ~a�����Ʊ�ʾ��11111111111111111111111111111111
//�������ڴ��д�����ǲ���
//һ����������3�ж����Ʊ�ʾ����
//ԭ��
//����
//����
// 
// ��������ԭ�룬���룬���붼һ��
// 
// ��Ը�������
//���磺  -1
//ԭ�룺100000000000000010000000000000001
//										 ����λ���䣬����λȡ��   �������ϵ��
//���룺111111111111111111111111111111110
//										 ����+1						�������ϵ��
//���룺111111111111111111111111111111111

//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++
//	printf("%d\n", b);//b=10
//	printf("%d\n", a);//a=11
//
//	int c = 10;
//	int d = ++c;//ǰ��++����++����ʹ��
//	printf("%d\n", d);//d=11
//	printf("%d\n", c);//c=11
//	return 0;
//}

//int main()
//{
//	//(int)ǿ��ת����int
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//��Ŀ�����  ? :
//��if else �е���
//exp1 ? exp2 : exp3;
//exp1Ϊ�棬����exp2,�������ʽ���Ϊexp2�Ľ��
//exp1Ϊ�٣�����exp3,�������ʽ���Ϊexp3�Ľ��
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

//���ű��ʽ	��exp1,exp2,exp3,...expn)
//����ʼ���㣬�������ʽ��������һ�����ʽ���
//int main()
//{
//	int a = 3;
//	int b = 8;
//	int c = 4;
//	int d = (a = b - c, b = a + 2, c = a + b);
//	printf("%d\n", d);
//	return 0;
//}

//2022.09.04ѧϰ
//1.�±����ò���������������[],���㿪ʼ��
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	printf("%d\n", arr[4]);//��ӡ�����е����Ԫ��
//	return 0;
//}

//2.�������ò�����    ����
//int main()
//{
//	printf("100");//���ú���ʱ����������ģ�����ʱ�������ò�����
//	return 0;
//}

//�ؼ���
//auto �Զ�		ÿ���ֲ�����������auto���εģ������Զ��������Զ����١�
//��C����Ҳ�������÷�
//extern		�����ⲿ���ŵ�
//register		�Ĵ����ؼ���	Ϊ����ߴ���Ч��
//int main()
//{
//	register int a = 19;//������ڼĴ�����
//	return 0;
//}
// ��������淽ʽ
//CPU�ӼĴ�����ȡֵ							�Ĵ���			�ռ��С���ٶȿ�
//											���ٻ���		��ʮMB
//											�ڴ�			8G-32G
//											Ӳ��
//											����

//signed	�з��ŵ�
//unsigned	�޷��ŵ�
//static		��̬��
//union			�����壨�����壩
//void		��

//09.12ѧϰ
//while ѭ���У�break�������õ���ֹѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)//i==5��ʱ����ѭ��
//		{
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//whileѭ���У�continue��������������continue��Ĵ��룬ֱ�ӻص��жϲ��֣����Ƿ������һ��ѭ��
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

//getchar	��ȡһ���ַ�����׼���룬������
//EOF(end 0f file)	�ļ�������־�������ϰ� ctrl+z,�൱��EOF
//putchar	���һ���ַ�
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
//	printf("���������룺>");
//	scanf("%s", PassWord);
//	//����������ֱ������\n���൱�ڻس�
//	int tmp = 0;
//	while ((tmp = getchar()) !='\n')
//	{
//		;
//	}
//	printf("�ٴ�ȷ������(Y/N)��>");
//	int ch = 0;
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}

//09.19ѧϰ
//do
//{
//
//} while (true);��ִ��һ��ѭ���壬���ж�while�ı��ʽ�����Ϊ�٣������ѭ��
//int main()//���1-10
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
//		if ( 6 == a )//a==6,������ǰѭ��
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
//		if ( 6 == a )//a==6,ʡ�Ժ����ѭ������
//		{
//			continue;
//		}
//		printf("%d ", a);
//			a++;
//	} while (10 >= a);
//	return 0;
//}

//����n�Ľ׳�
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

//����1-10�Ľ׳˺�
//int main()//����һ
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

//���ַ�����һ������������е�ĳ��ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int k = 8;//Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�صĸ�����
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
//			printf("�ҵ���:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//��ӡһ���ַ������������м���ʾ
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
//		Sleep(1000);//����1����
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}

//int main()//��������������룬���ζ������˳�����
//{
//	printf("��¼���������룺>");
//	char PassWord[20] = "12345abc";
//	char UserPassWord[20] = "0";
//	int i = 1;
//	
//	
//	while (i < 4)
//	{
//		scanf("%s", UserPassWord);
//		if (strcmp(UserPassWord,PassWord) == 0)//strcmp �Ƚ������ַ�������ȷ���0
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else if (i < 3)
//		{
//			i++;
//			printf("����������������룺>");
//		}
//		else
//		{
//			printf("��������������󣬳����˳�");
//				break;
//		}
//		
//	}
//	return 0;
//}

//09.20ѧϰ
//��������Ϸ
//����1��1-100����������¶��ˣ����Լ���ѡ���棬�´��ˣ�������

//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("########################\n");
//	printf("###### ��������Ϸ ######\n");
//	printf("########################\n");
//	printf("*                      *\n");
//	printf("************************\n");
//	printf("******   1.��ʼ    *****\n");
//	printf("******   0.�˳�    *****\n");
//	printf("************************\n");
//}

//void game()//��������Ϸ��ʵ��
//{
//	//1.���������
//	//rand ��������һ��0-32767֮�����
//	int ret = rand()%100+1;//%100��������0-99���ټ�1���ǣ�1-100
//	int guess = 0;
//	//2.������
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���");
//			break;
//		}
//	}
//	
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ���
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:	
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//2022.09.28
//F10---�����
//F11---����䣬���ú�����Ҳ���Լ���

//int main()//��3������ֵ�ĴӴ�С���(����һ)
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
//	printf("���������ִӴ�С��˳���ǣ�%d %d %d", a, b, c);
//	return 0;
//}

//2022.09.29
//��3������ֵ�ĴӴ�С���(������)ûд����
//void comp(tmp1, tmp2)
//{
//	if (tmp1 < tmp2)
//	{
//		int big = tmp2;
//		tmp2 = tmp1;
//		tmp1 = big;
//	}
//	return tmp1, tmp2;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	comp(a, b);
//	comp(a, c);
//	comp(b, c);
//	printf("���������ִӴ�С��˳���ǣ�%d %d %d", a, b, c);
//	return 0;
//}

////��ӡ0-100֮��3�ı���
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

//��������ֵ�����Լ��(����һ)
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
//			printf("�������������Լ���ǣ�%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//��������ֵ�����Լ��(������)
//շת�����
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
//	printf("�������������Լ���ǣ�%d", b);
//	return 0;
//}

//����1000-2000��֮�������(����һ)
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		//1.�ܱ�4���������ܱ�100����������
//		//2.�ܱ�400����������
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

//����1000-2000��֮�������(������)
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
////		//1.�ܱ�4���������ܱ�100����������
////		//2.�ܱ�400����������
//		if (((year % 4 ==0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//�ж�100-200֮�������
//����=������ֻ�ܱ�1������������
// ����һ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for ( b = 100; b < 200; b++)
//	{
//		for ( a = 2; a < b; a++)//����2��b-1֮�������,
//		{
//			if (b % a == 0)//����b����2��b-1֮�����
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

// ������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for ( b = 100; b < 200; b++)
//	{
//		int flag = 1;
//		for ( a = 2; a < b; a++)//����2��b-1֮�������,
//		{
//			if (b % a == 0)//����b����2��b-1֮�����
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

//������
//�Ż���
//m = a * b
//a��b��һ��������һ�������� <= ��ƽ��m��
//16 = 2 * 8 = 4 * 4

//sqrt  �ǿ�ƽ������   ʹ�� math.h
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (b = 100; b < 200; b++)//�������Ż��� for (b = 100; b < 200; b+=2)
//	{
//		int flag = 1;
//		for (a = 2; a <= sqrt(b); a++)//����2��֮�������,
//		{
//			if (b % a == 0)//����b����2��b-1֮�����
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
