#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Output2_3(int length)
{
	int num=1 ;//ʹ��num����ѧ���������
	
	if (length != 1) {
		printf("\n���£�\n");
		for (size_t i = 0; i < length; i++)
		{
			printf("%d.%s\n", i + 1, student[i].Stu.Name);
		}
		printf("������Ҫ���ҵ����Ϣ(�����)\n");
		scanf("%d", &num);
		getchar();
		Beep(801, 200);
	}
	else
	{
		printf("%s�����Ϣ�ǣ�", student[0].Stu.Name);
	}
	num--;
	printf("\n������%s\n", student[num].Stu.Name);
	printf("ѧ�ţ�%s\n", student[num].Stu.XueHao);
	printf("����ڣ�%s\n", student[num].form.Date);

	switch (student[num].form.Color)
	{
	case 'a':printf("�����룺��ɫ\n"); break;
	case 'b':printf("�����룺��ɫ\n"); break;
	case 'c':printf("�����룺��ɫ\n"); break;
	
	default:
		break;
	}
	
	switch (student[num].form.Transportation)
	{
	case 'a':printf("��У��ͨ��ʽ����/����/����\n"); break;
	case 'b':printf("��У��ͨ��ʽ���ɻ�\n"); break;
	case 'c':printf("��У��ͨ��ʽ���Լ�\n"); break;
	case 'd':printf("��У��ͨ��ʽ������\n"); break;
	default:
		break;
	}
	printf("���Σ�%s\n", student[num].form.Train_number);

	switch (student[num].form.Risk_type)
	{
	case 'a':printf("�������ͣ���\n"); break;
	case 'b':printf("�������ͣ�;���߷��յ���\n"); break;
	case 'c':printf("�������ͣ���ס�ڸ߷��յ���\n"); break;
	case 'd':printf("�������ͣ��ܽӸ�Σ��Ⱥ\n"); break;

	default:
		break;
	}
	printf("��У;������:\n");
	
	for (size_t i = 0; i < 20; i++)
	{
		printf("%s ", student[num].form.City[i]);
		
	}
	printf("\n������ʱ�估�����\n");
	for (size_t i = 0; i < 10; i++)
	{
		printf("%c", student[num].form.result[i]);

	}
	printf("\t");
	if (student[num].form.result[11] == '-') {
		printf("����\n");
	}
	else
	{
		printf("����\n");
	}
	printf("\n");
}
