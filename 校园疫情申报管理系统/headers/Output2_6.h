
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Output2_6(int num_stu)//6. ͳ�Ƹ�������ص��ѧ����Ϣ��
{	
	int flag[50] = { 0 },temp=2;
	printf("������ʾ\n");

	for (size_t i = 0; i < num_stu; i++)
	{
		student[i].plan[49] = 0;//д����ֹ��

		if (student[i].plan[0] != '\0'&&flag[i]==0)
		{
			
			printf("%s: ", student[i].plan);
			printf("%s ", student[i].Stu.Name);
			flag[i] = 1;

			for (size_t j = i+1; flag[j] == 0; j++)//����flag����ظ���ѯ
			{
				temp = strcmp(student[i].plan, student[j].plan);
				if (temp == 0) {
					flag[j] = 1;
					printf("%s ", student[j].Stu.Name);
				}

			}
			printf("\n\n");
		}
	}
}