//创建一个数组，
//实现函数init（）初始化数组、
//实现 empty（）清空数组、
//实现 reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

#define _CRT_SECURE_NO_WARNINGS
#define wor 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void init(int a[wor]) {           //数组初始化
	int i;
	for (i = 0; i < wor; i++) {
		a[i] = 123456;
	}
}

void empty(int a[wor]) {           //数组清空
	int i;
	for (i = 0; i < wor; i++) {
		a[i] = 0;
	}
}

void reverse(int a[wor]) {                   //函数完成数组元素的逆置
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
	//printf("数组初始化\n");
	//for (i = 0; i < wor; i++) {
	//	printf("%d\n", a[i]);
	//}
	//empty(a);
	//printf("数组清空\n");
	//for (i = 0; i < wor; i++) {
	//	printf("%d\n", a[i]);
	//}
	reverse(a);
	printf("数组元素的逆置\n");
	for (i = 0; i < wor; i++) {
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}