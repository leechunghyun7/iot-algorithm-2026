#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	int i = 0;
	int sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}
	int j = 0;
	for (j = 0; j < n; j++) {
		if (*(arr + j) % 3 == 0) {
			printf("%d\n", *(arr + j));
			sum += *(arr + j);
		}
	}
	free(arr);
	printf("3의 배수 합계:%d\n", sum);
	return 0;
}