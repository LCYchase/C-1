//
//��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	printf("���ڵ��Լ���������һ���ַ�:");
	while (1) {
		i = getchar();
		if (i >= '!' && i < 'A') {
			if (i <= '0' || i >= '9') {
				putchar(i);
				printf("\n");
			}
		}
		if (i >= 65 && i < 91) {
			putchar(i + 32);
			printf("\n");
		}
		if (i >= 91 && i < 97) {
			putchar(i);
			printf("\n");
		}
		if (i >= 97 && i < 123) {
			putchar(i - 32);
			printf("\n");
		}
		if (i >= 123 && i < 127) {
			putchar(i);
			printf("\n");
		}
		printf("���ڵ��Լ���������һ���ַ�:");
	}
}