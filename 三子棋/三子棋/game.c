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