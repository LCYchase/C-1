//�壺�������������Լ����
#include<stdio.h>
#include<stdlib.h>
int main(){

	int a = 18;
	int b = 9;
	int c = 0;
	while (c = a % b)//��aģb����0�������ѭ������������շת���
	{
		a = b;//��ԭ����b����ģ����һ�ε�����
		b = c;//����������Ŀ�����γ�18��6
	}
	printf("%d\n", b);


	system("pause");
	return 0;
}