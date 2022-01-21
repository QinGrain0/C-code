#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	age(10);

	for (int i = 0;i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			printf("当前奇数为：%d\n", i);
		}
	}
	return 0;
}

