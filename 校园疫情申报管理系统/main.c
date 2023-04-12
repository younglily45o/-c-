#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"headers/all_struct.h"
#include"headers/background_music.h"
#include"headers/number.h"
#include"headers/Output.h"

//Daoru 完成信息导入
//Output 完成功能需求

int main()
{
	int Num_stu;
	backgroudmusic();
	Num_stu = Daoru();
	do
	{
		Output(Num_stu);
	} while (1);
	return 0;

}
