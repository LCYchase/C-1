#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void start() {
	printf("*****************************************************\n");
	printf("*****************************************************\n");
	printf("********************  1.��ʼ��Ϸ  *******************\n");
	printf("********************  2.�˳���Ϸ  *******************\n");
	printf("*****************************************************\n");
	printf("*****************************************************\n");
}
void games() {
	//���̳�ʼ��
	//������
	//��������
	//�ж���Ӯ
	char arr[row][col];
	init(arr ,row, col);
	Printing(arr ,row, col);

	//system("pause");
}

void test() {
	start();
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
		/*else if (a != 1 && a != 2); {
			printf("����Ƿ���������ѡ����Ϸ��ʼ��\n");
		}*/
	}

	system("pause");
}

int main() {
	test();
	return 0;
}
