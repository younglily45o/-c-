#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"one.h"
#include"two.h"
#include"three.h"
#include"four.h"
int Daoru()
{

	int Num_stu;
	Num_stu = One_XueShengShuJuDaoRu();		//1. 学生数据导入
	Two_FengXianDiQuDaoRu();		//2. 风险地区导入
	for (size_t j = 0; j < Num_stu; j++)
	{
		printf("*******************************************************************************\n");
		printf("*******************************************************************************\n");
		printf("******");
		printf("请输入%s的填报表:\n", student[j].Stu.Name);
		student[j].form.Num_city = Three_YiQingTianBaoBiao(j);		//3. 疫情填报表导入
		system("cls");
		if (student[j].form.result[11] == '+' || student[j].form.Color != 'a')
			Four_YiQingGuanKongBiao(j);		//4. 疫情管控措施表导入（选做）
		system("cls");
	}




	return Num_stu;
}