#define _CRT_SECURE_NO_WARNINGS 1
//��ݼ���ע��Ctrl+k+c  ȡ��ע��Ctrl+k+u
//Ctrl + F: ����    Ctrl+H: �滻 
//f5(����ִ��, ֱ���ٴ������ϵ�, ���߰�ctrl + alt + break��ǿ���ж�)
//f10(����, ����ִ��, ���ǵ���һ���ֻ����, ������һ����û�жϵ�)
//f11(����, �Ͳ���ͬЧ, �������ǰ����λ����һ�������Ļ�, ��һ�������������)
//shift + f11(����, ִ�е���ǰ��������)
//===================================================================01
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//(��n<=2ʱ����n��쳲�������Ϊ1     ��n>2ʱ����n��쳲�������Ϊǰ������֮�ͣ�  eg�� 1,1,2,3,5,8,13,21��������    

//#include <stdio.h>
//�ݹ�������
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


//�ǵݹ�������
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
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

//#include <stdio.h>
//(1)�ǵݹ�
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
//(2)�ݹ�
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
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include<stdio.h>
//(1)�ǵݹ�
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
//��2���ݹ�
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
//	printf("������һ����������>");
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d",sum);
//	return 0;
//}
//===================================================================04
//
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���˼·����Ϊ����ʹ��C�������е��ַ�����������������ڵݹ麯���ĵ���ʱ,�ȶ���һ��ָ����char�ַ���
//�����ڲ��ȵ����Լ���ֱ���ҵ�һ���ַ�Ϊ��\0��ʱ��ʼ�����ӡ������ʵ���ַ��������һ����ʼ�����
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
//	char *str = "abcde";//����char string[] = "abcde";
//	Reverse_String(str);//e d c b a
//	return 0;
//}
//===================================================================05
//
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include<stdio.h>
//#include<assert.h>
//
////�ݹ�
//int my_strlen_2(const char* str_2)
//{
//	assert(str_2 != NULL);
//	if (*str_2)
//		return 1 + my_strlen_2(str_2 + 1);
//	else
//		return 0;
//}
//
////�ǵݹ�
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
//	printf("���ǵݹ�)len_1 = %d\n", len_1);
//	printf("���ݹ�)len_2 = %d\n", len_2);
//	return 0;
//}


//===================================================================06
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//#include<stdio.h>
////(1)�ǵݹ�
//int Factorial_r(int num)
//{
//	int k = 1;
//	while (num > 0)
//		k *= num--;
//	return k;
//}
////(2���ݹ�
//int Factorial(int num)
//{
//	return num > 0 ? num * Factorial(num - 1) : 1;
//}
//
//int main()
//{
//	int n = 0;
//
//	printf("������һ�����������Ľ׳�:");
//	scanf("%d", &n);
//	printf("�ݹ�->%d\n", Factorial(n));
//	printf("�ǵݹ�->%d\n", Factorial_r(n));
//	system("pause");
//	return 0;
//}

//===================================================================07
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ��˼·����һ������ÿһλ->��10ģ10��

#include<stdio.h>
void output(int n)
{
	if (n>9)//��ʱ2λ��ʱ
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
