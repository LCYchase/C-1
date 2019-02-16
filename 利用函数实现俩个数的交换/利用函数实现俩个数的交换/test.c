#define _CRT_SECURE_NO_WARNINGS
//2.使用函数实现两个数的交换。
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
	printf("请输入你要交换的俩个数：");
	scanf("%d %d", &i, &j);
	exchange(&i,&j);
	printf("%d %d\n",i,j);
	system("pause");
	return 0;
} 