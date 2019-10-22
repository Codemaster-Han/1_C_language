//=================================================================================01
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void multiplication_table(int n);
//int main()
//{
//	int num;
//	printf("请输入一个1-9之间的数>:");
//	scanf("%d", &num);
//	multiplication_table(num);
//	return 0;
//}
//
//void multiplication_table(int n)
//{
//	int i = 0;//行
//	int j = 0;//列
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
//2.使用函数实现两个数的交换。
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
//3.实现一个函数判断year是不是润年。
//#include<stdio.h>
//int main()
//{
//	int year;
//	printf("请输入year->:");
//	scanf("%d", &year);
//	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("\n%d年是闰年\n", year);
//	}
//	else
//	{
//		printf("%d年不是闰年\n",year);
//	}
//	return 0;
//}
//=================================================================================04
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int init(int arr[], int len)
//{
//	int i = 0;
//	printf("初始化数组：\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int reverse(int arr[], int len)
//{
//	int i = 0;
//	printf("逆置数组：\n");
//	for (i = len - 1; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int empty(int arr[], int len)
//{
//	int i = 0;
//	printf("清空数组：\n");
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
//5.实现一个函数，判断一个数是不是素数。
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
	printf("请输入一个数->:\n");
	scanf("%d", &a);
	int b = Judge(a);
	if (b == 1)
	{printf("素数\n");}
	else
	{printf("非素数\n");}
	return 0;
}
