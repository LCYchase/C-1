#define _CRT_SECURE_NO_WARNINGS
//2.ʹ�ú���ʵ���������Ľ�����
#include <stdio.h>
#include <stdlib.h>
void exchange(int* x,int* y){
	//x = x ^ y;
	//y = x ^ y;
	//x = x ^ y;
	int k;
	k = *x;
	*x = *y;
	*y = k;
	//printf("%d %d\n", x,y );
}
int main() {
	int i = 0;
	int j = 0;
	printf("��������Ҫ��������������");
	scanf("%d %d", &i, &j);
	exchange(&i,&j);
	printf("%d %d\n",i,j);
	system("pause");
	return 0;
} 