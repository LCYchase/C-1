//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char a[20];
	int i = 1;
	while (i <= 3) {
		printf("�������������: ");
		scanf("%s", &a);
		if ( 0 == strcmp (a,"123456") ) {
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("����������������룡����\n");
		}		
		i++;
	}
	if (i > 3) {
		printf("���Ѿ��������δ������룬����ֹͣ���У�\n");
	}
	system("pause");
	return 0;
}
