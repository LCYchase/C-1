#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//�����ʼ��
void init(char arr[3][3], int x, int y) {
	int i;
	int j;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			arr[i][j] = ' ';
		}
	}
}
//��ӡ����
//��Ҫ�޸�
void Printing(char arr[3][3],int x,int y) {
	int i;
	for (i = 0; i < x; i++) {
		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
		if (i != (y-1)) {
			printf("---|---|---\n");
		}
		
	}
}
//������