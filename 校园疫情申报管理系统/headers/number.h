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
	Num_stu = One_XueShengShuJuDaoRu();		//1. ѧ�����ݵ���
	Two_FengXianDiQuDaoRu();		//2. ���յ�������
	for (size_t j = 0; j < Num_stu; j++)
	{
		printf("*******************************************************************************\n");
		printf("*******************************************************************************\n");
		printf("******");
		printf("������%s�����:\n", student[j].Stu.Name);
		student[j].form.Num_city = Three_YiQingTianBaoBiao(j);		//3. ���������
		system("cls");
		if (student[j].form.result[11] == '+' || student[j].form.Color != 'a')
			Four_YiQingGuanKongBiao(j);		//4. ����ܿش�ʩ���루ѡ����
		system("cls");
	}




	return Num_stu;
}