#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//完成一个扫雷游戏的C语言小程序
//欢迎界面
//选择游戏功能
//game游戏函数

void start1() {
	printf("****************************************************\n");
	printf("***************    欢迎来到欢乐炸    ***************\n");
	printf("***************     1 .开始游戏      ***************\n");
	printf("***************     0 .退出游戏      ***************\n");
	printf("****************************************************\n");
}
void start2() {
	printf("****************************************************\n");
	printf("***************    欢迎来到欢乐炸    ***************\n");
	printf("***************     1 .开始游戏      ***************\n");
	printf("***************     0 .退出游戏      ***************\n");
	printf("****************************************************\n");
}
void start3() {
	printf("****************************************************\n");
	printf("***************    欢迎下次再来      ***************\n");
	printf("***************       欢乐炸         ***************\n");
	printf("***************      游戏退出...     ***************\n");
	printf("****************************************************\n");
}
void game() {
	//建立一个二维数组放置地雷
	//建立一个二维数组显示界面
	//布置10个累
	//开始扫雷
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
		printf("请输入你要的选择：");
		scanf("%d", &a);
		if (a == 1) {
			//进入游戏
			game();
		}
		else if (a == 0) {
			//游戏结束
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