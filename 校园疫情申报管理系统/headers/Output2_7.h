#pragma once
#include<stdio.h>
void Output2_7(int num_stu)	//7. 对于红码和核酸阳性的学生，建立他们所途经的城市图
{
	int j;
	for (size_t i = 0; i < num_stu; i++)
	{
		if (student[i].form.Color == 'c' || student[i].form.result[11] == '+')
		{
			printf("%s: ",student[i].Stu.Name);


			for (j = 0; j < student[i].form.Num_city-1; j++)
			{
				printf("%s", student[i].form.City[j]);
				if (student[i].form.Num_city !=1)
				{
					printf("->");
				}
			}
			printf("%s\n", student[i].form.City[j]);
		}
	}
	printf("\n");
}