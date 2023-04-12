#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Output2_5(int num_stu)
{
	char letter_le[2];
	

		printf("请输入要查找的类型：\n");
		printf("a:黄码\nb:红码\nc:核酸阳性\n");
		scanf("%s", &letter_le);
		getchar();
		Beep(801, 200);
		switch (letter_le[0])
		{
		case 'a':printf("黄码的同学有：\n");
			for (size_t i = 0; i < num_stu; i++)
			{
				if ('b' == student[i].form.Color)
				{
					printf("%s\n", student[i].Stu.Name);
				}
			}break;

		case 'b':printf("红码的同学有：\n");
			for (size_t i = 0; i < num_stu; i++)
			{
				if ('c' == student[i].form.Color)
				{
					printf("%s\n", student[i].Stu.Name);
				}
			}break;

		case 'c':printf("核酸阳性的同学有：\n");
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