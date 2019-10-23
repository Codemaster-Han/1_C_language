#define _CRT_SECURE_NO_WARNINGS 1
//快捷键：注释Ctrl+k+c  取消注释Ctrl+k+u
//Ctrl + F: 查找    Ctrl+H: 替换 
//f5(继续执行, 直到再次遇到断点, 或者按ctrl + alt + break键强行中断)
//f10(步过, 继续执行, 但是到下一行又会挂起, 不管下一行有没有断点)
//f11(步入, 和步过同效, 但如果当前挂起位置是一个函数的话, 下一步会进到函数里)
//shift + f11(步出, 执行到当前函数返回)
//===================================================================01
//1.递归和非递归分别实现求第n个斐波那契数。
//(当n<=2时，第n个斐波那契数为1     当n>2时，第n个斐波那契数为前两个数之和）  eg： 1,1,2,3,5,8,13,21、、、、    

//#include <stdio.h>
//递归解决方案
//int find(int num)
//{
//	if (num <= 2)
//		return 1;
//	else
//		return find(num - 1) + find(num - 2);
//}
//
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d", &n);
//	ret = find(n);
//	printf("%d\n", ret);
//}


//非递归解决方案
//int find(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", find(n));
//	return 0;
//}
//===================================================================02
//2.编写一个函数实现n^k，使用递归实现

//#include <stdio.h>
//(1)非递归
//int fac(int num1, int num2)
// { 
//	int i = 0;
//	int tmp = 1;
//	for (i = 1; i <= num2; i++)
//	{
//		tmp *= num1;
//	}
//	return tmp;
// }
//(2)递归
//int fac(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*fac(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = fac(n,k);
//	printf("%d", ret);
//	return 0;
//}
//===================================================================03
//
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#include<stdio.h>
//(1)非递归
//int DigitSum(int num)
//{
//	int k = 0;
//	if (num > 9)
//	{
//		k = (num / 1000) % 10+(num / 100) % 10 + (num / 10) % 10 + num % 10;
//		return k;
//	}
//	else
//		return num;
//}
//（2）递归
//int DigitSum(int num)
//{
//	int sum = 0;
//	int m = 0;
//	if (num != 0)
//	{
//		m = num % 10;
//		num = num / 10;
//		sum = m + DigitSum(num);
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数：>");
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d",sum);
//	return 0;
//}
//===================================================================04
//
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//编程思路：因为不能使用C函数库中的字符串操作函数，因此在递归函数的调用时,先定义一个指针型char字符串
//函数内部先调用自己，直到找到一个字符为’\0’时开始往外打印，最终实现字符串从最后一个开始输出。
//#include<stdio.h>
//void Reverse_String(char *string) 
//{
//	if (*string == '\0') 
//	{
//		return 0;
//	}
//	Reverse_String(string + 1);
//	printf("%c ", *string);
//}
//int main() 
//{
//	char *str = "abcde";//或者char string[] = "abcde";
//	Reverse_String(str);//e d c b a
//	return 0;
//}
//===================================================================05
//
//5.递归和非递归分别实现strlen
//#include<stdio.h>
//#include<assert.h>
//
////递归
//int my_strlen_2(const char* str_2)
//{
//	assert(str_2 != NULL);
//	if (*str_2)
//		return 1 + my_strlen_2(str_2 + 1);
//	else
//		return 0;
//}
//
////非递归
//int my_strlen_1(const char* str_1)
//{
//	int count = 0;
//	assert(str_1 != NULL);
//	while (*str_1)
//	{
//		count++;
//		str_1++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len_1 = my_strlen_1("abcdef");
//	int len_2 = my_strlen_2("abcdef");
//	printf("（非递归)len_1 = %d\n", len_1);
//	printf("（递归)len_2 = %d\n", len_2);
//	return 0;
//}


//===================================================================06
//6.递归和非递归分别实现求n的阶乘
//#include<stdio.h>
////(1)非递归
//int Factorial_r(int num)
//{
//	int k = 1;
//	while (num > 0)
//		k *= num--;
//	return k;
//}
////(2）递归
//int Factorial(int num)
//{
//	return num > 0 ? num * Factorial(num - 1) : 1;
//}
//
//int main()
//{
//	int n = 0;
//
//	printf("请输入一个数，求他的阶乘:");
//	scanf("%d", &n);
//	printf("递归->%d\n", Factorial(n));
//	printf("非递归->%d\n", Factorial_r(n));
//	system("pause");
//	return 0;
//}

//===================================================================07
//7.递归方式实现打印一个整数的每一位（思路：求一个数的每一位->除10模10）

#include<stdio.h>
void output(int n)
{
	if (n>9)//当时2位数时
	{
		output(n / 10);
	}
	printf("%d,", n % 10);
}

int main()
{

	int num = 1234;
	output(num);
	return 0;
}

//===================================================================
