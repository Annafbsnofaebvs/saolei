#define _CRT_SECURE_NO_WARNINGS 1

#include "game6.h"
void menu()
{
	printf("*********************\n");
	printf("****   1.play   *****\n");
	printf("****   0.exit   *****\n");
	printf("*********************\n");
}
void game()
{
	char mine[ROW][COLS] = {0};//��Ų��úõ��׵���Ϣ
	char show[ROW][COLS] = {0};//����Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'

	//��ӡһ������
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}		
	} while (input);
	return 0;
}