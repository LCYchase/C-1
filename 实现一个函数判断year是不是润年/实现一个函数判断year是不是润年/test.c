//实现一个函数判断year是不是润年

//判断思想：
//1、普通年能被4整除且不能被100整除的为闰年。（如2004年就是闰年, 1900年不是闰年）
//
//2、世纪年能被400整除的是闰年。(如2000年是闰年，1900年不是闰年)
//
//3、对于数值很大的年份, 这年如果能整除3200，并且能整除172800则是闰年。
//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int judge(int*i) {
	if (*i % 100 != 0) {
		if (*i % 4 == 0) {
			if (*i % 100 != 0) {
				return 1;
			}
		}
	}
	if (*i % 100 == 0) {
		if (*i % 100 == 0) {
			if (*i / 100 % 4 == 0) {
				return 1;
			}
		}
	}
	if (*i > 172800) {
		if (*i % 3200 == 0) {
			if (*i % 172800 == 0) {
				return 1;
			}
		}
	}
	else
		return 0;
}
void main() {
	int k = 0;
	printf("请输入你要判断的年份：");

	scanf("%d", &k);
	if (judge(&k) == 1) {
		printf("输入的年份是闰年：%d\n", k);
	}
	else
		printf("输入的年份不是闰年：%d\n", k);
	system("pause");
}