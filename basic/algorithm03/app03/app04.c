#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*---재귀함수 recur 선언과 정의---*/
void recur(int n) {
	if (n > 0) {
		recur(n - 1);
		printf("%d\n", n);
		recur(n - 2);
	}
}
int main(void) {
	int x;
	while (1) {
		printf("정수 입력>"); scanf("%d", &x);

		if (x <= 0)break;
		recur(x);
	}
	return 0;
}