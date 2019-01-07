//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
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