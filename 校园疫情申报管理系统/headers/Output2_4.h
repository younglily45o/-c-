#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 24
void Output2_4(int n)
{
	printf("请输入所要查找的城市：\n");
	char find_city[25];
	int flag=0;
	find_city[24] = 0;
	scanf("%s", &find_city);
	getchar();
	Beep(801, 200);
	printf("经过该城市的同学有：\n");
	for (size_t i = 0; i <n; i++)
	{
		for (size_t j = 0; j < student->form.Num_city && student[i].form.City[j]!=NULL; j++)
		{
			student[i].form.City[j][24] = 0;

			if (strcmp(find_city, student[i].form.City[j])==0) {
				printf("%s ",student[i].Stu.Name);
				flag = 1;
			}
		}

	}
	if (flag == 0)printf("无经过此城市是学生！");
	printf("\n\n");

}