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
//���µ������á�X����ʾ
int pepoleplay(char arr[3][3], int x, int y) {
	int a;
	int b;
	printf("��������Ҫ�µ���������: ");
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
			printf("�����ظ����ӣ�����������: ");
		}
		
	}
}
//�������庯��
void computerplay(char arr[3][3], int x, int y) {
	int a;
	int b;
	printf("�����µ�����: \n");
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
				//printf("�����ظ����ӣ�����������: \n");
				continue;
			}	
		//}
	}
}
//�ж������Ƿ�Ϊ��
int man(char arr[3][3], int x, int y) {
	int i;
	int j;
	int k = 0;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			if (arr[i][j] != ' ') {
				k++;
				return 0;
				//printf("��������");
				if (k == 9) {
					//printf("��������");
					return 1;
					//break;
				}
			}
		}
	}
	
	//return P;
}
//�ж���Ӯ
int shuying(char arr[3][3], int x, int y) {
	int i;
	int j;
	
	for (i = 0; i < 3; i++) {
		if ((arr[0][i] == 'X') && (arr[1][i]=='X') && (arr[2][i]=='X')) {
			//printf("��ϲ�㣬��Ӯ�ˣ�");
			return 0;
		}
		else if ((arr[0][i] == '0') && (arr[1][i] == '0') && (arr[2][i] == '0')) {
			//printf("���ź��������ˣ�");
			return 1;
		}
	}
	for (j = 0; j < 3; j++) {
		if ((arr[j][0] == 'X') && (arr[j][1] == 'X') && (arr[j][2] == 'X')) {
			//printf("��ϲ�㣬��Ӯ�ˣ�");
			return 0;
		}
		else if ((arr[j][0] == '0') && (arr[j][1] == '0') && (arr[j][2] == '0')) {
			//printf("���ź��������ˣ�");
			return 1;
		}
	}
	if ((arr[0][0] == 'X') && (arr[1][1] == 'X') && (arr[2][2] == 'X')) {
		//printf("��ϲ�㣬��Ӯ�ˣ�");
		return 0;
	}
	if ((arr[2][0] == 'X') && (arr[1][1] == 'X') && (arr[0][2] == 'X')) {
		//printf("��ϲ�㣬��Ӯ�ˣ�");
		return 0;
	}
	if ((arr[0][0] == '0') && (arr[1][1] == '0') && (arr[2][2] == '0')) {
		//printf("���ź��������ˣ�");
		return 1;
	}
	if ((arr[2][0] == '0') && (arr[1][1] == '0') && (arr[0][2] == '0')) {
		//printf("���ź��������ˣ�");
		return 1;
	}
}