#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"Output2_3.h"
#include"Output2_4.h"
#include"Output2_5.h"
#include"Output2_6.h"
#include"Output2_7.h"
void Output(int Num_stu)
{
	char features[2];

	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("请输入查询方向：\t\t\t\t\t\t***************\n");
	printf("**********a: 根据姓名，查看单个同学的填报信息\t\t\t***************\n");
	printf("**********b: 查看途径某城市的学生列表信息\t\t\t***************\n");
	printf("**********c: 查看黄码 / 红码，以及核酸阳性的学生信息\t\t***************\n");
	printf("**********d: 统计各个隔离地点的学生信息\t\t\t\t***************\n");
	printf("**********e: 对于红码和核酸阳性的学生，建立他们所途经的城市图   ***************\n");
	printf("**********f: 退出查询\t\t\t\t\t\t***************\n");
	printf("*******************************************************************************\n");

	scanf("%s", &features);
	Beep(801, 200);
	getchar();
	switch (features[0])
	{
	case 'a':Output2_3(Num_stu); break;	//2.3. 根据姓名，查看单个同学的填报信息。
	case 'b':Output2_4(Num_stu); break;
		//2.4. 查看途径某城市的学生列表信息。
	case 'c':Output2_5(Num_stu); break;	//2.5. 查看黄码 / 红码，以及核酸阳性的学生信息
	case 'd':Output2_6(Num_stu); break;	//2.6. 统计各个隔离地点的学生信息。
	case 'e':Output2_7(Num_stu); break;
		//7. 对于红码和核酸阳性的学生，建立他们所途经的城市图
	case 'f':exit(0);
	default:
		break;
	}
	printf("按  Enter  键返回. . .\n");
	getchar();
	Beep(801, 200);
	system("cls");
}