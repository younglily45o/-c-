#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Output2_3(int length)
{
	int num=1 ;//使用num当作学生排序序号
	
	if (length != 1) {
		printf("\n如下：\n");
		for (size_t i = 0; i < length; i++)
		{
			printf("%d.%s\n", i + 1, student[i].Stu.Name);
		}
		printf("请输入要查找的填报信息(填序号)\n");
		scanf("%d", &num);
		getchar();
		Beep(801, 200);
	}
	else
	{
		printf("%s的填报信息是：", student[0].Stu.Name);
	}
	num--;
	printf("\n姓名：%s\n", student[num].Stu.Name);
	printf("学号：%s\n", student[num].Stu.XueHao);
	printf("填报日期：%s\n", student[num].form.Date);

	switch (student[num].form.Color)
	{
	case 'a':printf("健康码：绿色\n"); break;
	case 'b':printf("健康码：黄色\n"); break;
	case 'c':printf("健康码：红色\n"); break;
	
	default:
		break;
	}
	
	switch (student[num].form.Transportation)
	{
	case 'a':printf("返校交通方式：火车/动车/高铁\n"); break;
	case 'b':printf("返校交通方式：飞机\n"); break;
	case 'c':printf("返校交通方式：自驾\n"); break;
	case 'd':printf("返校交通方式：其他\n"); break;
	default:
		break;
	}
	printf("车次：%s\n", student[num].form.Train_number);

	switch (student[num].form.Risk_type)
	{
	case 'a':printf("风险类型：无\n"); break;
	case 'b':printf("风险类型：途径高风险地区\n"); break;
	case 'c':printf("风险类型：居住在高风险地区\n"); break;
	case 'd':printf("风险类型：密接高危人群\n"); break;

	default:
		break;
	}
	printf("返校途径城市:\n");
	
	for (size_t i = 0; i < 20; i++)
	{
		printf("%s ", student[num].form.City[i]);
		
	}
	printf("\n核酸检测时间及结果：\n");
	for (size_t i = 0; i < 10; i++)
	{
		printf("%c", student[num].form.result[i]);

	}
	printf("\t");
	if (student[num].form.result[11] == '-') {
		printf("阴性\n");
	}
	else
	{
		printf("阳性\n");
	}
	printf("\n");
}
