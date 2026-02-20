#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a = 0;
	int	b = 0;
	int c = 0;
	int max = 0;

	printf("세 정수 중 최대값을 리턴\n");
	printf("a>"); scanf("%d", &a);
	printf("b>"); scanf("%d", &b);
	printf("c>"); scanf("%d", &c);

	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	printf("최댓값은 %d\n", max);
	return 0;
}