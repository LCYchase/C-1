将三个数按从大到小输出。
#include<stdio.h>
#include<stdlib.h>

int  main() {

		int i , j , k ;
	printf("请输入三个数字");
	scanf("%d%d%d", &i, &j, &k);
	if ((i > j)&&( i > k)) {
		if (j > k) {
			printf("%d %d %d\n", i, j, k);
		}
		else
			printf("%d %d %d\n", i, k, j);
	}
	if ((k > j)&&(k > i)) {
		if (i > j) {
			printf("%d %d %d\n", k, i, j);
			
		}
		else
			printf("%d %d %d\n", k, j, i);
	}
	if (j > i&&j > k) {
		if (i > k) {
			printf("%d %d %d\n", j, i, k);

		}
		else
			printf("%d %d %d\n", j, k, i);
	}

	////1.2.3
	//int m;
	//if (i < j) {
	//	m = i; i = j; j = k;
	//}
	//if (i < k) {
	//	m = i; i = k; k = m;
	//}
	//if (j < k) {
	//	m = k; j = k; k = m;
	//}
	//printf("%d%d%d\n",i,j,k);
	system("pause");
	return 0;
}
