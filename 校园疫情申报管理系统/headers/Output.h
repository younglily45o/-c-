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
	printf("�������ѯ����\t\t\t\t\t\t***************\n");
	printf("**********a: �����������鿴����ͬѧ�����Ϣ\t\t\t***************\n");
	printf("**********b: �鿴;��ĳ���е�ѧ���б���Ϣ\t\t\t***************\n");
	printf("**********c: �鿴���� / ���룬�Լ��������Ե�ѧ����Ϣ\t\t***************\n");
	printf("**********d: ͳ�Ƹ�������ص��ѧ����Ϣ\t\t\t\t***************\n");
	printf("**********e: ���ں���ͺ������Ե�ѧ��������������;���ĳ���ͼ   ***************\n");
	printf("**********f: �˳���ѯ\t\t\t\t\t\t***************\n");
	printf("*******************************************************************************\n");

	scanf("%s", &features);
	Beep(801, 200);
	getchar();
	switch (features[0])
	{
	case 'a':Output2_3(Num_stu); break;	//2.3. �����������鿴����ͬѧ�����Ϣ��
	case 'b':Output2_4(Num_stu); break;
		//2.4. �鿴;��ĳ���е�ѧ���б���Ϣ��
	case 'c':Output2_5(Num_stu); break;	//2.5. �鿴���� / ���룬�Լ��������Ե�ѧ����Ϣ
	case 'd':Output2_6(Num_stu); break;	//2.6. ͳ�Ƹ�������ص��ѧ����Ϣ��
	case 'e':Output2_7(Num_stu); break;
		//7. ���ں���ͺ������Ե�ѧ��������������;���ĳ���ͼ
	case 'f':exit(0);
	default:
		break;
	}
	printf("��  Enter  ������. . .\n");
	getchar();
	Beep(801, 200);
	system("cls");
}