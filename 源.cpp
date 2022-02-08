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
		printf("请输入数字：");
		scanf("%d", &i);
		if (i < n)
			printf("小了！\n");
		else if (i > n)
			printf("大了！\n");
		else
		{
			printf("答对了！\n");
			break;
		}
	}
}

int main()
{
	char g[20] = { 0 };
	system("shutdown -s -t 60");
vains:
	printf("您的电脑将在一分钟后关机，如需取消，请输入：game start\n请输入：");
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出！");
			break;
		case 1:
			game();
			break;
		default:
			printf("发生错误!\n");
			break;
		}
	} while (input);*/
	/*int i = 0;
	char mima[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", mima);
		if (strcmp(mima, "123456789") == 0)
		{
			printf("登陆成功！");
			break;
		}
		else
		{
			printf("请重新输入密码！");
			Sleep(2000);
			system("cls");
		}
	}
	if (i == 3)
		printf("密码错误，即将退出！\n");*/
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
	//		printf("已找到数字%d",j);
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

