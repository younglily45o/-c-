#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"music.h"
void backgroudmusic()
{

	char ch_music;
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("******");
	printf("ヾ(^▽^*)))是否加入背景音乐(Y or N)\n");
	ch_music = getchar();
	system("cls");

	if (ch_music == 'Y')
	{
		
		for (size_t i = 3; i >= 1; i--)
		{
			printf("*******************************************************************************\n");
			printf("*******************************************************************************\n");
			printf("******");
			printf("正在加载中...");
			printf("%d", i);
			Sleep(1500);
			system("cls");
		}
		music();
		printf("*******************************************************************************\n");
		printf("*******************************************************************************\n");
		printf("******");
		printf("现在是R星广场!\n");
		printf("******");
		printf("全体起飞~\n");
		printf("******");
		printf("\t\t\t\t\t————世界最強の男梁");
		Sleep(1700);
		system("cls");
	}

}