//实现一个函数，判断一个数是不是素数
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

	printf("请输入一个数");
	scanf("%d", &k);
	sushu(k);
	if (sushu(k) == 1) {
		printf("这个数是素数：%d\n", k);
	}
	else 
		printf("这个数不是素数：%d\n", k);
	system("pause");
	return 0;

}