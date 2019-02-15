//
//编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	printf("请在电脑键盘上输入一个字符:");
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
		printf("请在电脑键盘上输入一个字符:");
	}
}