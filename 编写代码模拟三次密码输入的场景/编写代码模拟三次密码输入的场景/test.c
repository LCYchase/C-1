//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char a[20];
	int i = 1;
	while (i <= 3) {
		printf("请输入你的密码: ");
		scanf("%s", &a);
		if ( 0 == strcmp (a,"123456") ) {
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误，请重新输入！！！\n");
		}		
		i++;
	}
	if (i > 3) {
		printf("您已经输入三次错误密码，程序停止运行！\n");
	}
	system("pause");
	return 0;
}
