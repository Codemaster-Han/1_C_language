//=================================================================================01
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void multiplication_table(int n);
//int main()
//{
//	int num;
//	printf("������һ��1-9֮�����>:");
//	scanf("%d", &num);
//	multiplication_table(num);
//	return 0;
//}
//
//void multiplication_table(int n)
//{
//	int i = 0;//��
//	int j = 0;//��
//	int tmp = 0;
//	for (i = 1; i <=n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			tmp = i*j;
//			printf("%d*%d=%d ", j, i, tmp);
//		}
//		printf("\n");
//	}
//}


//=================================================================================02
//2.ʹ�ú���ʵ���������Ľ�����
//#include<stdio.h>
//
//void Number_change(int *pa, int *pb);
//
//int main()
//{
//	int a = 5;
//	int b = 3;
//	Number_change(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}
//void Number_change(int *pa, int *pb)
//{
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}

//=================================================================================03
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//#include<stdio.h>
//int main()
//{
//	int year;
//	printf("������year->:");
//	scanf("%d", &year);
//	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("\n%d��������\n", year);
//	}
//	else
//	{
//		printf("%d�겻������\n",year);
//	}
//	return 0;
//}
//=================================================================================04
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int init(int arr[], int len)
//{
//	int i = 0;
//	printf("��ʼ�����飺\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int reverse(int arr[], int len)
//{
//	int i = 0;
//	printf("�������飺\n");
//	for (i = len - 1; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int empty(int arr[], int len)
//{
//	int i = 0;
//	printf("������飺\n");
//	for (i = 0; i <len; i++)
//	{
//		arr[i] = 0;
//		printf("%d", arr[i]);
//	}
//}
//void Test()
//{
//	int arr[5] = { 2, 3, 4, 5, 6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, len);
//	printf("\n");
//	init(arr, len);
//	printf("\n");
//	empty(arr, len);
//	printf("\n");
//}
//int main()
//{
//	Test();
//	return 0;
//}

//=================================================================================05
//5.ʵ��һ���������ж�һ�����ǲ���������
#include <stdio.h>
int Judge(int a)
{
	for (int y = 2; y <= a / 2; y++)
	{
		if (a%y == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	int a = 0;
	printf("������һ����->:\n");
	scanf("%d", &a);
	int b = Judge(a);
	if (b == 1)
	{printf("����\n");}
	else
	{printf("������\n");}
	return 0;
}
