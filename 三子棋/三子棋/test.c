#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void start1() {
	printf("*****************************************************\n");
	printf("****************  ��ӭ���������延��վ  *************\n");
	printf("********************  1.��ʼ��Ϸ  *******************\n");
	printf("********************  2.�˳���Ϸ  *******************\n");
	printf("*****************************************************\n");
	printf("*****************************************************\n");
}
void start2() {
	printf("*****************************************************\n");
	printf("****************  ��ӭ���������延��վ  *************\n");
	printf("********************  1.����һ��  *******************\n");
	printf("********************  2.�˳���Ϸ  *******************\n");
	printf("*****************************************************\n");
	printf("*****************************************************\n");
}
void games() {
	//���̳�ʼ��
	//������
	//��������
	//�ж������Ƿ�����
	//�ж���Ӯ
		//��Ӯ��Ϊ:0
		//����Ӯ��Ϊ��1
		//ƽ��Ϊ��1
	int v=4;
	srand((unsigned)time(NULL));
	char arr[row][col];
	init(arr ,row, col );//��ʼ��
	Printing(arr ,row, col);//��ӡ����
	while (v) {
		pepoleplay(arr, row, col);//������
		Printing(arr, row, col);//��ӡ����
		man(arr, row, col);//�ж������Ƿ�Ϊ��
		if (man(arr, row, col)==1) {
			printf("ƽ��\n");
			break;
		}
		//printf("%d\n",man(arr, row, col));
		shuying(arr, row, col);//�ж���Ӯ
		if (shuying(arr, row, col) == 0) {
			printf("��ϲ�㣬��Ӯ�ˣ�\n");
			break;
		}
		computerplay(arr, row, col);//��������
		Printing(arr, row, col);//��ӡ����
		man(arr, row, col);//�ж������Ƿ�Ϊ��
		if (man(arr, row, col) == 1) {
			printf("ƽ��\n");
			break;
		}
		shuying(arr, row, col);//�ж���Ӯ
		if (shuying(arr, row, col) == 1) {
			printf("���ź��������ˣ�\n");
			break;
		}
	}
	

	//system("pause");
}

void test() {
	start1();
	int a = 0 ;
	while (1) {
		
		printf("���������ѡ��");
	    scanf("%d", &a);
	    if (a == 1) {
			printf("��Ϸ��ʼ\n");
			games();
			/*break;*/
		}
		else if (a == 2) {
			printf("��Ϸ������\n");
			break;
		}
		start2();
	}	
		/*else if (a != 1 && a != 2); {
			printf("����Ƿ���������ѡ����Ϸ��ʼ��\n");
		}*/
	system("pause");
}

int main() {
	test();
	return 0;
}
