#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int Three_YiQingTianBaoBiao(int j)		//3. 疫情填报表
{
	FILE* questionnare;
	questionnare = fopen("txt/questionnare.txt", "r");

	if (questionnare == NULL) {
		printf("打开文件时发生错误");
		return(-1);
	}
	char None[100] = { '\0' };
	for (size_t i = 0; i < 4; i++)
	{
		fgets(None, 100, questionnare);
	}

	char c[100] = { '\0' };
	printf("******");
	printf("%s", fgets(c, 100, questionnare));
	printf("******");
	printf("%s", fgets(c, 100, questionnare));
	fgetc(questionnare);
	printf("******");
	scanf("%s", &student[j].form.XueHao);
	getchar();//使用getchar()将回车吃掉,以免造成不必要的麻烦

	printf("******");
	printf("%s", fgets(c, 100, questionnare));
	printf("******");
	printf("%s", fgets(c, 100, questionnare));
	printf("******");
	fgetc(questionnare);
	student[j].form.Date[9] = '*';
	scanf("%s", &student[j].form.Date);
	getchar();

	for (size_t i = 0; i < 5; i++) {
		printf("******");
		printf("%s", fgets(c, 100, questionnare));
	}
	printf("******");
	fgetc(questionnare);
	scanf("%s", &student[j].form.Color);
	getchar();

	for (size_t i = 0; i < 6; i++) {
		printf("******");
		printf("%s", fgets(c, 100, questionnare));
	}
	printf("******");
	fgetc(questionnare);
	scanf("%s", &student[j].form.Transportation);
	getchar();

	for (size_t i = 0; i < 2; i++) {
		printf("******");
		printf("%s", fgets(c, 100, questionnare));
	}
	printf("******");
	fgetc(questionnare);
	scanf("%s", &student[j].form.Train_number);
	getchar();

	for (size_t i = 0; i < 6; i++) {
		printf("******");
		printf("%s", fgets(c, 100, questionnare));
	}
	printf("******");		
	fgetc(questionnare);
	scanf("%s", &student[j].form.Risk_type);
	getchar();

	for (size_t i = 0; i < 2; i++) {
		printf("******");
		printf("%s", fgets(c, 100, questionnare));
	}/*
	printf("******");
	printf("%s", fgets(c, 100, questionnare));*/
	fgetc(questionnare);
	char ch;
	int i;
	printf("******");
	for (i = 0, ch = ' '; ch != '\n'; i++)
	{
		scanf("%s", &student[j].form.City[i]);
		ch = getchar();
	}
	Beep(801, 200);

	for (size_t i = 0; i < 3; i++) {
		printf("******");
		printf("%s", fgets(c, 100, questionnare));
	}
	printf("******");
	fgetc(questionnare);
	scanf("%s", &student[j].form.result);
	Beep(801, 200);
	fclose(questionnare);
	printf("\n\n");

	return i ;//返回返校途径城市数

}