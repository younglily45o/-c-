#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Four_YiQingGuanKongBiao(int j)
{
	FILE* plan;
	plan = fopen("txt/plan.txt", "r");

	if (plan == NULL) {
		printf("打开文件时发生错误");
		return(-1);
	}

	char c[100] = {'\0'};
	for (size_t i = 0; i < 11; i++) {
		printf("******");
		printf("%s", fgets(c, 100, plan));
		
	}
	printf("******");
	scanf("%s", &student[j].letter);
	Beep(801, 200);
	fgetc(plan);

	for (size_t i = 0; i < 2; i++) {
		printf("******");
		printf("%s", fgets(c, 100, plan));
	}
	student[j].plan[0] = '\0';
	printf("******");
	scanf("%s", &student[j].plan);
	getchar(); 
	Beep(801, 200);

}