#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

<<<<<<< HEAD
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
=======
void start() {
	printf("*****************************************************\n");
	printf("*****************************************************\n");
	printf("********************  1.��ʼ��Ϸ  *******************\n");
>>>>>>> fce07c49e3beab94a603777b320ebabd849af427
	printf("********************  2.�˳���Ϸ  *******************\n");
	printf("*****************************************************\n");
	printf("*****************************************************\n");
}
void games() {
	//���̳�ʼ��
	//������
	//��������
<<<<<<< HEAD
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
	
=======
	//�ж���Ӯ
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
		
		printf("���������ѡ��");
	    scanf("%d", &a);
	    if (a == 1) {
=======
	start();
	int a = 0 ;
	while (1) {
		
		
		printf("���������ѡ��");
		scanf("%d", &a);
		if (a == 1) {
>>>>>>> fce07c49e3beab94a603777b320ebabd849af427
			printf("��Ϸ��ʼ\n");
			games();
			/*break;*/
		}
		else if (a == 2) {
			printf("��Ϸ������\n");
			break;
		}
<<<<<<< HEAD
		start2();
	}	
		/*else if (a != 1 && a != 2); {
			printf("����Ƿ���������ѡ����Ϸ��ʼ��\n");
		}*/
=======
		/*else if (a != 1 && a != 2); {
			printf("����Ƿ���������ѡ����Ϸ��ʼ��\n");
		}*/
	}

>>>>>>> fce07c49e3beab94a603777b320ebabd849af427
	system("pause");
}

int main() {
	test();
	return 0;
}
