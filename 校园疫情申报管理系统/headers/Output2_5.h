#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Output2_5(int num_stu)
{
	char letter_le[2];
	

		printf("������Ҫ���ҵ����ͣ�\n");
		printf("a:����\nb:����\nc:��������\n");
		scanf("%s", &letter_le);
		getchar();
		Beep(801, 200);
		switch (letter_le[0])
		{
		case 'a':printf("�����ͬѧ�У�\n");
			for (size_t i = 0; i < num_stu; i++)
			{
				if ('b' == student[i].form.Color)
				{
					printf("%s\n", student[i].Stu.Name);
				}
			}break;

		case 'b':printf("�����ͬѧ�У�\n");
			for (size_t i = 0; i < num_stu; i++)
			{
				if ('c' == student[i].form.Color)
				{
					printf("%s\n", student[i].Stu.Name);
				}
			}break;

		case 'c':printf("�������Ե�ͬѧ�У�\n");
			for (size_t i = 0; i < num_stu; i++)
			{
				if ('+' == student[i].form.result[11])
				{
					printf("%s\n", student[i].Stu.Name);
				}
			}break;

		default:
			break;
		}
		printf("\n");

}