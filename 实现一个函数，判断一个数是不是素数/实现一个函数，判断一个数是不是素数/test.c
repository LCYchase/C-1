//ʵ��һ���������ж�һ�����ǲ�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int sushu(int x) {
	int j;
		for (j = 2; j <= x; j++) {
			if (x%j == 0) {
				break;
			}
		}
		if (x == j) {
			return 1;
		}
		else
			return 0;
}
int main() {
	int k;

	printf("������һ����");
	scanf("%d", &k);
	sushu(k);
	if (sushu(k) == 1) {
		printf("�������������%d\n", k);
	}
	else 
		printf("���������������%d\n", k);
	system("pause");
	return 0;

}