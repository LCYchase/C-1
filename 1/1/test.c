//1.在屏幕上输出以下图案：
//*0   1
//***1    3 
//*****2     5
//*******3      7
//*********4
//***********5
//*************6
//***********7
//*********8
//*******9
//*****10
//***11
//*12
//
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	int j=1;
	int k=-1;
	for (i = 1; i <= 7; i++) {
			for (j = 1;j<=k+2;j++) {
				printf("*");
				if (j == k + 2) {
					printf("\n");
				}
			}
		k+=2;
	}
	for (i = 7; i <= 13; i++) {
		for (j = 1; j <= k - 2; j++) {
			printf("*");
			if (j == k - 2) {
				printf("\n");
			}
		}
		k -= 2;
	}

	system("pause");
	return 0;
}