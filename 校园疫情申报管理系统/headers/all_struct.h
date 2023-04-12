#include<stdio.h>
#define N 100
struct XueSheng
{
	struct Students {
		char XueHao[15];	//学号
		char Name[10];		//名字
		char XueYuan[50];	//学院
		char Class[10];		//班级
		char SuShe[15];		//宿舍
	}Stu;

	

	struct questionnare
	{
		char XueHao[15];	//学号
		char Date[15];	//日期
		char Color;		//健康码颜色
		char Transportation;	//返校交通方式
		char Train_number[20];	//车次
		char Risk_type;		//风险类型
		char City[20][25];	//返校途径城市
		int Num_city;
		char result[12];	//日期及结果
	}form;

	char letter, plan[50];		//管控措施和隔离地点,注释有点离谱不要喷
}student[N];


struct Riskregion
{
	char date[15], region[N][200];		//日期和风险区域
}Place[N];
