#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

<<<<<<< HEAD
void start1() {
	printf("*****************************************************\n");
	printf("****************  欢迎来到三子棋欢乐站  *************\n");
	printf("********************  1.开始游戏  *******************\n");
	printf("********************  2.退出游戏  *******************\n");
	printf("*****************************************************\n");
	printf("*****************************************************\n");
}
void start2() {
	printf("*****************************************************\n");
	printf("****************  欢迎来到三子棋欢乐站  *************\n");
	printf("********************  1.再来一局  *******************\n");
=======
void start() {
	printf("*****************************************************\n");
	printf("*****************************************************\n");
	printf("********************  1.开始游戏  *******************\n");
>>>>>>> fce07c49e3beab94a603777b320ebabd849af427
	printf("********************  2.退出游戏  *******************\n");
	printf("*****************************************************\n");
	printf("*****************************************************\n");
}
void games() {
	//棋盘初始化
	//人下棋
	//电脑下棋
<<<<<<< HEAD
	//判断棋盘是否满了
	//判断输赢
		//人赢了为:0
		//电脑赢了为：1
		//平局为：1
	int v=4;
	srand((unsigned)time(NULL));
	char arr[row][col];
	init(arr ,row, col );//初始化
	Printing(arr ,row, col);//打印棋盘
	while (v) {
		pepoleplay(arr, row, col);//人下棋
		Printing(arr, row, col);//打印棋盘
		man(arr, row, col);//判断棋盘是否为满
		if (man(arr, row, col)==1) {
			printf("平局\n");
			break;
		}
		//printf("%d\n",man(arr, row, col));
		shuying(arr, row, col);//判断输赢
		if (shuying(arr, row, col) == 0) {
			printf("恭喜你，你赢了！\n");
			break;
		}
		computerplay(arr, row, col);//电脑下棋
		Printing(arr, row, col);//打印棋盘
		man(arr, row, col);//判断棋盘是否为满
		if (man(arr, row, col) == 1) {
			printf("平局\n");
			break;
		}
		shuying(arr, row, col);//判断输赢
		if (shuying(arr, row, col) == 1) {
			printf("很遗憾，你输了！\n");
			break;
		}
	}
	
=======
	//判断输赢
	char arr[row][col];
	init(arr ,row, col);
	Printing(arr ,row, col);
>>>>>>> fce07c49e3beab94a603777b320ebabd849af427

	//system("pause");
}

void test() {
<<<<<<< HEAD
	start1();
	int a = 0 ;
	while (1) {
		
		printf("请输入你的选择：");
	    scanf("%d", &a);
	    if (a == 1) {
=======
	start();
	int a = 0 ;
	while (1) {
		
		
		printf("请输入你的选择：");
		scanf("%d", &a);
		if (a == 1) {
>>>>>>> fce07c49e3beab94a603777b320ebabd849af427
			printf("游戏开始\n");
			games();
			/*break;*/
		}
		else if (a == 2) {
			printf("游戏结束！\n");
			break;
		}
<<<<<<< HEAD
		start2();
	}	
		/*else if (a != 1 && a != 2); {
			printf("输入非法，请重新选择游戏开始！\n");
		}*/
=======
		/*else if (a != 1 && a != 2); {
			printf("输入非法，请重新选择游戏开始！\n");
		}*/
	}

>>>>>>> fce07c49e3beab94a603777b320ebabd849af427
	system("pause");
}

int main() {
	test();
	return 0;
}
