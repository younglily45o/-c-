#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 24
void Output2_4(int n)
{
	printf("��������Ҫ���ҵĳ��У�\n");
	char find_city[25];
	int flag=0;
	find_city[24] = 0;
	scanf("%s", &find_city);
	getchar();
	Beep(801, 200);
	printf("�����ó��е�ͬѧ�У�\n");
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
	if (flag == 0)printf("�޾����˳�����ѧ����");
	printf("\n\n");

}