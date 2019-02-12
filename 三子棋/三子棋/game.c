#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//数组初始化
void init(char arr[3][3], int x, int y) {
	int i;
	int j;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			arr[i][j] = ' ';
		}
	}
}
//打印棋盘
//需要修改
void Printing(char arr[3][3],int x,int y) {
	int i;
	for (i = 0; i < x; i++) {
		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
		if (i != (y-1)) {
			printf("---|---|---\n");
		}
		
	}
}
//人下棋
//人下的棋子用“X”表示
int pepoleplay(char arr[3][3], int x, int y) {
	int a;
	int b;
	printf("请输入你要下的棋子坐标: ");
	while (1) {
		scanf("%d %d", &a, &b);
		a = a - 1;
		b = b - 1;
		//printf("%d%d\n",a ,b);
		if (arr[a][b] == ' ') {

			arr[a][b] = 'X';
			break;
		}
		else if (arr[a][b] != ' ') {
			printf("不能重复落子，请重新下棋: ");
		}
		
	}
}
//电脑下棋函数
void computerplay(char arr[3][3], int x, int y) {
	int a;
	int b;
	printf("电脑下的棋子: \n");
	while (1) {
		//scanf("%d %d", &a, &b);
		a = rand() % 3;
		b = rand() % 3;
		//if (check_full(arr,row,col) == 0 ) {
		
			//printf("%d%d\n",a ,b);
			if (arr[a][b] == ' ') {
				arr[a][b] = '0';
				break;
			}
			else {
				//printf("不能重复落子，请重新下棋: \n");
				continue;
			}	
		//}
	}
}
//判断棋盘是否为满
int man(char arr[3][3], int x, int y) {
	int i;
	int j;
	int k = 0;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			if (arr[i][j] != ' ') {
				k++;
				return 0;
				//printf("棋盘已满");
				if (k == 9) {
					//printf("棋盘已满");
					return 1;
					//break;
				}
			}
		}
	}
	
	//return P;
}
//判断输赢
int shuying(char arr[3][3], int x, int y) {
	int i;
	int j;
	
	for (i = 0; i < 3; i++) {
		if ((arr[0][i] == 'X') && (arr[1][i]=='X') && (arr[2][i]=='X')) {
			//printf("恭喜你，你赢了！");
			return 0;
		}
		else if ((arr[0][i] == '0') && (arr[1][i] == '0') && (arr[2][i] == '0')) {
			//printf("很遗憾，你输了！");
			return 1;
		}
	}
	for (j = 0; j < 3; j++) {
		if ((arr[j][0] == 'X') && (arr[j][1] == 'X') && (arr[j][2] == 'X')) {
			//printf("恭喜你，你赢了！");
			return 0;
		}
		else if ((arr[j][0] == '0') && (arr[j][1] == '0') && (arr[j][2] == '0')) {
			//printf("很遗憾，你输了！");
			return 1;
		}
	}
	if ((arr[0][0] == 'X') && (arr[1][1] == 'X') && (arr[2][2] == 'X')) {
		//printf("恭喜你，你赢了！");
		return 0;
	}
	if ((arr[2][0] == 'X') && (arr[1][1] == 'X') && (arr[0][2] == 'X')) {
		//printf("恭喜你，你赢了！");
		return 0;
	}
	if ((arr[0][0] == '0') && (arr[1][1] == '0') && (arr[2][2] == '0')) {
		//printf("很遗憾，你输了！");
		return 1;
	}
	if ((arr[2][0] == '0') && (arr[1][1] == '0') && (arr[0][2] == '0')) {
		//printf("很遗憾，你输了！");
		return 1;
	}
}