#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//���һ��ɨ����Ϸ��C����С����
//��ӭ����
//ѡ����Ϸ����
//game��Ϸ����

void start1() {
	printf("****************************************************\n");
	printf("***************    ��ӭ��������ը    ***************\n");
	printf("***************     1 .��ʼ��Ϸ      ***************\n");
	printf("***************     0 .�˳���Ϸ      ***************\n");
	printf("****************************************************\n");
}
void start2() {
	printf("****************************************************\n");
	printf("***************    ��ӭ��������ը    ***************\n");
	printf("***************     1 .��ʼ��Ϸ      ***************\n");
	printf("***************     0 .�˳���Ϸ      ***************\n");
	printf("****************************************************\n");
}
void start3() {
	printf("****************************************************\n");
	printf("***************    ��ӭ�´�����      ***************\n");
	printf("***************       ����ը         ***************\n");
	printf("***************      ��Ϸ�˳�...     ***************\n");
	printf("****************************************************\n");
}
void game() {
	//����һ����ά������õ���
	//����һ����ά������ʾ����
	//����10����
	//��ʼɨ��
	srand((unsigned)time(NULL));
	char mu[wor][col] = {0};
	char cmm[wors][cols] = {0};
	init(mu, wor, col);
	init1(cmm, wors, cols);
	//Printing(mu, wor, col);
	Printing1(cmm, wor, col);
	lei(mu, wor, col);
	while (1) {
		//Printing(mu, wor, col);
		saolei(mu, wor, col, cmm, wor, col);
		//dispiay(muu, wors, cols, mu, wor, col);
		Printing1(cmm, wors, cols);
		//Printing(mu, wor, col);
	}
	
}
void tast() {
	start1();
	int a;

	while (1) {
		printf("��������Ҫ��ѡ��");
		scanf("%d", &a);
		if (a == 1) {
			//������Ϸ
			game();
		}
		else if (a == 0) {
			//��Ϸ����
			system("cls");
			start3();
			Sleep(2000);
			exit(0);
			break;
		}
		printf("\n");
		start2();		
	}
	system("pause");
}

int main() {
	tast();
	return;
}