#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void menu()
{
	printf("#################################################################\n");
	printf("####################### 1.play     2.exit  ######################\n");
	printf("#################################################################\n");
}

void game()
{
	int n = 0;
	int i = 0;
	n = rand()%100+1;
	while (i != rand())
	{
		printf("���������֣�");
		scanf("%d", &i);
		if (i < n)
			printf("С�ˣ�\n");
		else if (i > n)
			printf("���ˣ�\n");
		else
		{
			printf("����ˣ�\n");
			break;
		}
	}
}

int main()
{
	char g[20] = { 0 };
	system("shutdown -s -t 60");
vains:
	printf("���ĵ��Խ���һ���Ӻ�ػ�������ȡ���������룺game start\n�����룺");
	scanf("%s", g);
	if (strcmp(g, "game start") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto vains;
	}
	/*int input = 0;
	srand((unsigned int)time(NULL));
	do
	{	
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���");
			break;
		case 1:
			game();
			break;
		default:
			printf("��������!\n");
			break;
		}
	} while (input);*/
	/*int i = 0;
	char mima[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", mima);
		if (strcmp(mima, "123456789") == 0)
		{
			printf("��½�ɹ���");
			break;
		}
		else
		{
			printf("�������������룡");
			Sleep(2000);
			system("cls");
		}
	}
	if (i == 3)
		printf("������󣬼����˳���\n");*/
	/*char arr[] = "happy new year !!!!!!!!!!!!!";
	char m[] = "############################";
	int left = 0; 
	int right = strlen(arr)-1;
		while(left <= right)
		{
			m[left] = arr[left];
			m[right] = arr[right];
			Sleep(100);
			system("cls");
			printf("%s\n", m);
			left++;
			right--;
		}*/
	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//int i = 0, j,n = 0;
	//scanf("%d", &n);
	//for (i = 0; i < 10; i++)
	//{
	//	j = arr[i];
	//	if (j == n)
	//		printf("���ҵ�����%d",j);
	//}
	
	 
	//int x,y = 1,sum = 0;
	//scanf("%d", &x);
	//	for (int i = 1; i <= x; i++)
	//	{
	//		y = y*i;
	//		sum = sum + y;
	//	}	
	//printf("%d\n", sum);
	return 0;
}

