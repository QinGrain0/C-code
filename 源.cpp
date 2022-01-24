#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
	char arr[] = "happy new year !!!!!!!!!!!!!";
	char m[] = "############################";
	int left = 0; 
	int right = strlen(arr)-1;
		while(left <= right)
		{
			printf("%s\n", m);
			m[left] = arr[left];
			m[right] = arr[right];
			left++;
			right--;
			Sleep(100);
			system("cls");
		}
	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//int i = 0, j,n = 0;
	//scanf("%d", &n);
	//for (i = 0; i < 10; i++)
	//{
	//	j = arr[i];
	//	if (j == n)
	//		printf("ÒÑÕÒµ½Êý×Ö%d",j);
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

