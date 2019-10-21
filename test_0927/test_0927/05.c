//====================================================================================01 猜数字
//1.完成猜数字游戏。
//思路：1）先写出一个选择菜单；2）写出主函数； 3）生成随机数，写出玩游戏的函数，猜数字，提示猜大还是猜小
//产生一个100以内的随机数，需要用rand函数，srand函数，时间戳，所以还要引用头文件
#define _CRT_SECURE_NO_WARNINGS 1//对scanf的一个宏定义
#include  <stdio.h>
#include  <stdlib.h>
void menu();
void play_game();

int main()
{
	srand((unsigned int)time(NULL));//因为只需要随机一次，所以将此函数放在循环外面
	int input=0;
	do//此语句至少进行一次循环
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:  
				   play_game();
				   break;
		case 0:
			       printf("退出游戏\n");
				   break;
		default:
			       printf("选择错误，请重新选择\n");
				   break;
		}
	} while (input);

	return 0;
}

void menu()
{
	printf("################################\n");
	printf("######输入1：玩游戏#############\n");
	printf("######输入0：不玩游戏###########\n");
	printf("################################\n");
}
void play_game()
{
		//1. 生成随机值
		int ret = 0;
		int guess = 0;
		//时间戳
		ret = rand() % 100 + 1;		 //printf("%d\n", ret);可打印出来看一下所生成的数字是不是100以内的随机数
		//2. 猜数字
		while(1)
		{
				printf("请猜数字:>");
				scanf("%d", &guess);
				if(guess < ret)
				{
					printf("猜小了\n");
				}
				else if(guess > ret)
				{
					printf("猜大了\n");
				}
				else
				{
					printf("恭喜你，猜对了\n");
					break;
			    }
		}

}
//====================================================================================02 折半查找
//2.写代码可以在 整型有序数组 中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
#include <stdio.h>     //方法一：直接查找
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int find = 3;//查找元素3
	int size= sizeof(arr1) / sizeof(arr1[0]);//数组中元素个数计算
	int left = 0;//左下标
	int right = size - 1; // 右下标
	while (left <= right)
	{
		int middle = (left + right) / 2;  //中间值得下标
		if (arr1[middle] > find)//当中间值大时，find在中间值的左边，此时应该调整右下标
		{
			right = middle - 1;
		}
		else if (arr1[middle] < find)//要找的数在中间值的右边，此时应该调整左下标
		{
			left = middle + 1;
		}
		else//当中间值下标和find下标相等，则找到了次元素
		{
			printf("找到了，下标为：%d\n",middle);
			break;
		}
	}
	if (left>right)
	{
		printf("抱歉，没找到\n");
	}

	return 0;
}



#include <stdio.h>     //方法二：进行函数调用
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int find = 3;//查找元素3
	int size = sizeof(arr1) / sizeof(arr1[0]);//数组中元素个数计算
	int ret = 0;
	ret = num_search(arr1,find, size);
		if(ret == -1)
		{
			printf("很遗憾，找不到\n");
		}
		else
		{
			printf("找到了，下标是：%d\n", ret);
		}
	return 0;
}

int num_search(int arr1[], int find, int size)
{
	int left = 0;//左下标
	int right = size - 1; // 右下标
	while (left <= right)
	  {
		int middle = (left + right) / 2;  //中间值得下标
		if (arr1[middle] > find)//当中间值大时，find在中间值的左边，此时应该调整右下标
		{
			right = middle - 1;
		}
		else if (arr1[middle] < find)//要找的数在中间值的右边，此时应该调整左下标
		{
			left = middle + 1;
		}
		else//当中间值下标和find下标相等，则找到了次元素
		{
			return middle;
			break;
		}
	  }
	if (left>right)
	{
		return -1;
	}
 }
//====================================================================================03 三次密码输入
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
#define _CRT_SECURE_NO_WARNINGS 1//对scanf的一个宏定义
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0; i<3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if(strcmp(password, "1996") == 0)//strcmp函数： string1 identical to string2   当字符串1和字符串2完全一致时，返回值为0
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if(i == 3)
	{
		printf("三次密码错误，退出程序\n");
	}

	return 0;
}
//====================================================================================04 一直接收键盘字符
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//思路：一直接收——用 while循环，如果判断语句用 if和else if,大小写转换 查ASCLL码表 求差值
#define _CRT_SECURE_NO_WARNINGS 1//对scanf的一个宏定义
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("请从键盘中选择输入任意字符：");
	while (1)
	{
		char kk = 0;
		scanf("%c", &kk);
		if (kk >= 'a'&&kk <= 'z')//当输入的值kk为小写字母时
		{
			printf("%c\n", kk - 32);
		}
		else if (kk >= 'A'&&kk <= 'Z')//当输入的值kk为大写字母时
		{
			printf("%c\n", kk + 32);
		}
		else if(kk >= '0'&&kk <= '9')//当输入的值kk为数字时
		{
			printf(" \n");
		}
	}
	return 0;
}
