#include<stdio.h>
#define N 100
struct XueSheng
{
	struct Students {
		char XueHao[15];	//ѧ��
		char Name[10];		//����
		char XueYuan[50];	//ѧԺ
		char Class[10];		//�༶
		char SuShe[15];		//����
	}Stu;

	

	struct questionnare
	{
		char XueHao[15];	//ѧ��
		char Date[15];	//����
		char Color;		//��������ɫ
		char Transportation;	//��У��ͨ��ʽ
		char Train_number[20];	//����
		char Risk_type;		//��������
		char City[20][25];	//��У;������
		int Num_city;
		char result[12];	//���ڼ����
	}form;

	char letter, plan[50];		//�ܿش�ʩ�͸���ص�,ע���е����ײ�Ҫ��
}student[N];


struct Riskregion
{
	char date[15], region[N][200];		//���ںͷ�������
}Place[N];
