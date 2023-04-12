#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void Two_FengXianDiQuDaoRu()
{
	FILE* riskregion;
	riskregion = fopen("txt/riskregion.txt", "r");

	if (riskregion == NULL) {
		printf("打开文件时发生错误");
		return(-1);
	}

	char None[50] = { '\0' },c=0;
	for (size_t i = 0; i < 2; i++)
	{
		fgets(None, 50, riskregion);
	}

	for (size_t i = 0; !feof(riskregion); i++)
	{

		fgets(Place[i].date, 15, riskregion);
		for (size_t j = 0; j<2; j++)
		{
			fgets(Place[i].region[j],100, riskregion);
		}
		
	}
	fclose(riskregion);

}