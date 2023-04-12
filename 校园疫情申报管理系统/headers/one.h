#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int One_XueShengShuJuDaoRu()
{
	
	FILE* f_stu;
	f_stu = fopen("txt/students.txt", "r");

	if (f_stu==NULL) {
		printf("打开文件时发生错误");
		return(-1);
	}
	char c = '0', None[50] = {'\0'};
	int j;
	fgets(None,50,f_stu);
	for ( j = 0; !feof(f_stu); j++)
	{
		fscanf(f_stu, "%s", student[j].Stu.XueHao);
		fscanf(f_stu, "%s", student[j].Stu.Name);
		fscanf(f_stu, "%s", student[j].Stu.XueYuan);
		fscanf(f_stu, "%s", student[j].Stu.Class);
		fscanf(f_stu, "%s", student[j].Stu.SuShe);
		
	}
	return j;	//返回学生数目
}