//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ�� empty����������顢
//ʵ�� reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

#define _CRT_SECURE_NO_WARNINGS
#define wor 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void init(int a[wor]) {           //�����ʼ��
	int i;
	for (i = 0; i < wor; i++) {
		a[i] = 123456;
	}
}

void empty(int a[wor]) {           //�������
	int i;
	for (i = 0; i < wor; i++) {
		a[i] = 0;
	}
}

void reverse(int a[wor]) {                   //�����������Ԫ�ص�����
	int i;
	int b[wor] = { 0 };
	
	for (i = 0; i < wor; i++) {
		b[i] = a[i];
		//strcpy(b, a);
	}
	for (i = 0; i <= wor; i++) {
		a[i] = b[wor-i];
	}
}

int main() {
	int i;
	int a[wor] = {1,2,3,4,5,6,7,8,9,10};
	//init(a);
	//printf("�����ʼ��\n");
	//for (i = 0; i < wor; i++) {
	//	printf("%d\n", a[i]);
	//}
	//empty(a);
	//printf("�������\n");
	//for (i = 0; i < wor; i++) {
	//	printf("%d\n", a[i]);
	//}
	reverse(a);
	printf("����Ԫ�ص�����\n");
	for (i = 0; i < wor; i++) {
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}