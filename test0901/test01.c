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