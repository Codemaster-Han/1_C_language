//====================================================================================01 ������
//1.��ɲ�������Ϸ��
//˼·��1����д��һ��ѡ��˵���2��д���������� 3�������������д������Ϸ�ĺ����������֣���ʾ�´��ǲ�С
//����һ��100���ڵ����������Ҫ��rand������srand������ʱ��������Ի�Ҫ����ͷ�ļ�
#define _CRT_SECURE_NO_WARNINGS 1//��scanf��һ���궨��
#include  <stdio.h>
#include  <stdlib.h>
void menu();
void play_game();

int main()
{
	srand((unsigned int)time(NULL));//��Ϊֻ��Ҫ���һ�Σ����Խ��˺�������ѭ������
	int input=0;
	do//��������ٽ���һ��ѭ��
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:  
				   play_game();
				   break;
		case 0:
			       printf("�˳���Ϸ\n");
				   break;
		default:
			       printf("ѡ�����������ѡ��\n");
				   break;
		}
	} while (input);

	return 0;
}

void menu()
{
	printf("################################\n");
	printf("######����1������Ϸ#############\n");
	printf("######����0��������Ϸ###########\n");
	printf("################################\n");
}
void play_game()
{
		//1. �������ֵ
		int ret = 0;
		int guess = 0;
		//ʱ���
		ret = rand() % 100 + 1;		 //printf("%d\n", ret);�ɴ�ӡ������һ�������ɵ������ǲ���100���ڵ������
		//2. ������
		while(1)
		{
				printf("�������:>");
				scanf("%d", &guess);
				if(guess < ret)
				{
					printf("��С��\n");
				}
				else if(guess > ret)
				{
					printf("�´���\n");
				}
				else
				{
					printf("��ϲ�㣬�¶���\n");
					break;
			    }
		}

}
//====================================================================================02 �۰����
//2.д��������� ������������ �в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
#include <stdio.h>     //����һ��ֱ�Ӳ���
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int find = 3;//����Ԫ��3
	int size= sizeof(arr1) / sizeof(arr1[0]);//������Ԫ�ظ�������
	int left = 0;//���±�
	int right = size - 1; // ���±�
	while (left <= right)
	{
		int middle = (left + right) / 2;  //�м�ֵ���±�
		if (arr1[middle] > find)//���м�ֵ��ʱ��find���м�ֵ����ߣ���ʱӦ�õ������±�
		{
			right = middle - 1;
		}
		else if (arr1[middle] < find)//Ҫ�ҵ������м�ֵ���ұߣ���ʱӦ�õ������±�
		{
			left = middle + 1;
		}
		else//���м�ֵ�±��find�±���ȣ����ҵ��˴�Ԫ��
		{
			printf("�ҵ��ˣ��±�Ϊ��%d\n",middle);
			break;
		}
	}
	if (left>right)
	{
		printf("��Ǹ��û�ҵ�\n");
	}

	return 0;
}



#include <stdio.h>     //�����������к�������
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int find = 3;//����Ԫ��3
	int size = sizeof(arr1) / sizeof(arr1[0]);//������Ԫ�ظ�������
	int ret = 0;
	ret = num_search(arr1,find, size);
		if(ret == -1)
		{
			printf("���ź����Ҳ���\n");
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
		}
	return 0;
}

int num_search(int arr1[], int find, int size)
{
	int left = 0;//���±�
	int right = size - 1; // ���±�
	while (left <= right)
	  {
		int middle = (left + right) / 2;  //�м�ֵ���±�
		if (arr1[middle] > find)//���м�ֵ��ʱ��find���м�ֵ����ߣ���ʱӦ�õ������±�
		{
			right = middle - 1;
		}
		else if (arr1[middle] < find)//Ҫ�ҵ������м�ֵ���ұߣ���ʱӦ�õ������±�
		{
			left = middle + 1;
		}
		else//���м�ֵ�±��find�±���ȣ����ҵ��˴�Ԫ��
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
//====================================================================================03 ������������
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
#define _CRT_SECURE_NO_WARNINGS 1//��scanf��һ���궨��
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0; i<3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		if(strcmp(password, "1996") == 0)//strcmp������ string1 identical to string2   ���ַ���1���ַ���2��ȫһ��ʱ������ֵΪ0
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if(i == 3)
	{
		printf("������������˳�����\n");
	}

	return 0;
}
//====================================================================================04 һֱ���ռ����ַ�
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
//˼·��һֱ���ա����� whileѭ��������ж������ if��else if,��Сдת�� ��ASCLL��� ���ֵ
#define _CRT_SECURE_NO_WARNINGS 1//��scanf��һ���궨��
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("��Ӽ�����ѡ�����������ַ���");
	while (1)
	{
		char kk = 0;
		scanf("%c", &kk);
		if (kk >= 'a'&&kk <= 'z')//�������ֵkkΪСд��ĸʱ
		{
			printf("%c\n", kk - 32);
		}
		else if (kk >= 'A'&&kk <= 'Z')//�������ֵkkΪ��д��ĸʱ
		{
			printf("%c\n", kk + 32);
		}
		else if(kk >= '0'&&kk <= '9')//�������ֵkkΪ����ʱ
		{
			printf(" \n");
		}
	}
	return 0;
}
