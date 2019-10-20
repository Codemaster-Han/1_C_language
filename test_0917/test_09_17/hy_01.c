//==========================================================================
//程序1——求100到200之间的素数
//#include<stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 101;
//	int count = 0;
//	while(i<=200)
//	{
//		//printf("%d ", i);
//		//判断i是否为素数
//		//2->i-1
//		int flag = 0;
//		int j = 2;
//		while(j<=sqrt(i))
//		{
//			if(i%j == 0)
//			{
//				flag = 1;
//				break;
//			}
//			j++;
//		}
//		//..
//		if(flag == 0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		i+=2;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//==========================================================================
//程序2——打印乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9

//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 1;
//	while(i<=9)//行数
//	{
//		//一行的打印
//		int j = 1;
//		while(j<=i)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}

//==========================================================================
//程序3——求1000到2000之间的闰年
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int year = 1000;
//
//	while (year <= 2000)
//	{
//		//判断year是否为闰年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//		year++;
//	}
//	return 0;
//}