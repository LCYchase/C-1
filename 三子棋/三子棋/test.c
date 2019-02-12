#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void start() {
	printf("*****************************************************\n");
	printf("*****************************************************\n");
	printf("********************  1.开始游戏  *******************\n");
	printf("********************  2.退出游戏  *******************\n");
	printf("*****************************************************\n");
	printf("*****************************************************\n");
}
void games() {
	//棋盘初始化
	//人下棋
	//电脑下棋
	//判断输赢
	char arr[row][col];
	init(arr ,row, col);
	Printing(arr ,row, col);

	//system("pause");
}

void test() {
	start();
	int a = 0 ;
	while (1) {
		
		
		printf("请输入你的选择：");
		scanf("%d", &a);
		if (a == 1) {
			printf("游戏开始\n");
			games();
			/*break;*/
		}
		else if (a == 2) {
			printf("游戏结束！\n");
			break;
		}
		/*else if (a != 1 && a != 2); {
			printf("输入非法，请重新选择游戏开始！\n");
		}*/
	}

	system("pause");
}

int main() {
	test();
	return 0;
}
