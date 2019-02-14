#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//数组初始化
void init(char mu[wor][col], int x, int y) {
	int i;
	int j;
	for (i = 0; i < wor; i++) {
		for (j = 0; j < col; j++) {
			mu[i][j] = '0';
		}
	}
	//mu[x][y] = '1';
}
void init1(char cmm[wors][cols], int x, int y) {
	int i;
	int j;
	for (i = 0; i < wors; i++) {
		for (j = 0; j < cols; j++) {
			cmm[i][j] = '*';
		}
	}
}
//打印棋盘
//需要修改
void Printing(char mu[wor][col], int x, int y) {
	int i;
	int j;
	for (i = 0; i < (x); i++) {
		for (j = 0; j < (y); j++) {
			printf(" %c |", mu[i][j]);
		}
		printf("\n");
		//printf(" %c \n", mu[i][col]);
		//printf(" %c | %c | %c | %c | %c |\n", mu[i][0], mu[i][1], mu[i][2]);
		if (i != (y - 1)) {
			//printf("---");
			for (j = 0; j < (y-1); j++) {
				printf("---|");
			}
			printf("---\n");
			//printf("---|---|---\n");
		}

	}
}
void Printing1(char cmm[wors][cols], int x, int y) {
	int i;
	int j;
	int m, n=1;
	for (m = 0; m <= wors; m++) {
		printf(" %d  ", m);
	}
	printf("\n");
	for (m = 0; m <= wors; m++) {
		printf("   ");
	}
	printf("\n");
	for (i = 0; i < cols; i++) {
		
		printf(" %d  ", n);
		//printf("    ");
		for (j = 0; j < cols; j++) {			
			printf(" %c ",cmm[i][j]);
			if (j < 8) {
				printf("|");
			}
		}
		printf("\n");
		n++;
		//printf(" %c \n", mu[i][col]);
		//printf(" %c | %c | %c | %c | %c |\n", mu[i][0], mu[i][1], mu[i][2]);
		if (i != (cols-1)) {
			printf("    ");
			for (j =2; j <= cols; j++) {
				printf("---|");
			}
			printf("---\n");
			//printf("---|---|---\n");
		}

	}
}
//布置累
void lei(char mu[wor][col], int x, int y) {
	int i = 10;
	int z;
	int q;
	while (i) {
		z = rand() % 9;
		q = rand() % 9;
		if (mu[z+1][q+1] == '0') {
			mu[z+1][q+1] = '1';
			i--;
		}
		else {
			//printf("不能重复落子，请重新下棋: \n");
			continue;
		}
	}
}
//判读周围雷德个数
int shu(char mu[wor][col], int x,int y) {
	int count = 0;
	if (mu[x - 1][y - 1] == '1')
		count++;
	if (mu[x - 1][y] == '1')
		count++;
	if (mu[x - 1][y + 1] == '1')
		count++;
	if (mu[x][y - 1] == '1')
		count++;
	if (mu[x + 1][y - 1] == '1')
		count++;
	if (mu[x + 1][y] == '1')
		count++;
	if (mu[x + 1][y + 1] == '1')
		count++;
	if (mu[x][y + 1] == '1')
		count++;
	return count;
}
//扫雷 char cmm[wor][col],int c, int e
int saolei(char mu[wor][col],int x, int y, char cmm[wors][cols], int c, int e) {
	int z;
	int q;
	printf("请输入你的坐标 -> ");
	while (1) {
		scanf("%d %d", &z, &q);
		//printf("%d%d\n",a ,b);
		if (mu[z][q] == '0') {
			char ch = shu(mu, z, q);
			//printf("%c",ch+'0');
			cmm[z-1][q-1] =  ch + '0';
			open(mu,z,q,cmm);
			break;
		}
		if (mu[z][q] == '1') {
			printf("很遗憾，你失败了！\n");
			return 0;
			break;
		}
		return 1;
		printf("请继续输入你的坐标 -> ");
	}
}
//展开
//递归思想
void open(char mu[wor][col], int x, int y, char cmm[wors][cols]) {
	if (mu[x - 1][y - 1] == '0') {
		cmm[x - 1][y - 1] = shu(mu, x-1, y-1) + '0';
	}
		
	if (mu[x - 1][y] == '1') {
		cmm[x - 1][y ] = shu(mu, x - 1, y) + '0';
	}
	
	if (mu[x - 1][y + 1] == '1') {
		cmm[x - 1][y + 1] = shu(mu, x - 1, y + 1) + '0';
	}
		
	if (mu[x][y - 1] == '1') {
		cmm[x][y - 1] = shu(mu, x, y - 1) + '0';
	}
		
	if (mu[x + 1][y - 1] == '1') {
		cmm[x + 1][y - 1] = shu(mu, x + 1, y - 1) + '0';
	}
		
	if (mu[x + 1][y] == '1') {
		cmm[x+ 1][y] = shu(mu, x + 1, y) + '0';
	}
	
	if (mu[x + 1][y + 1] == '1') {
		cmm[x + 1][y + 1] = shu(mu, x + 1, y + 1) + '0';
	}
		
	if (mu[x][y + 1] == '1') {
		cmm[x][y + 1] = shu(mu, x, y + 1) + '0';
	}
		
}