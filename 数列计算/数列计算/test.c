//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	double j = 1;
	int k=1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++) {
		sum += k*(j / i);
		k = -k;
	}
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
 }