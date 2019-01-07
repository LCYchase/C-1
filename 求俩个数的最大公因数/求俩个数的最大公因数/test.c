//五：求两个数的最大公约数。
#include<stdio.h>
#include<stdlib.h>
int main(){

	int a = 18;
	int b = 9;
	int c = 0;
	while (c = a % b)//若a模b不余0，则继续循环，继续往下辗转相除
	{
		a = b;//用原来的b继续模上上一次的余数
		b = c;//即这两步的目的是形成18÷6
	}
	printf("%d\n", b);


	system("pause");
	return 0;
}