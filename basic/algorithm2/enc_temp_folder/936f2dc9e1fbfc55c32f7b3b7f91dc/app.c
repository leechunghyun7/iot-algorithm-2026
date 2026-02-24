//app2 -이진검색

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int bin_search(const int[], int, int);

int main(void) {
	int nx, ky;
	puts("이진검색");
	printf("요소 개수>"); scanf("%d", &nx);
	int* x = calloc(nx, sizeof(int));
	printf("오름차순 입력할 것,\n");
	printf("x[0]>"); scanf("%d", &x[0]);

	for (int i = 1; i < nx; i++) {
		do {
			printf("x[%d]>"); scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);//배열 앞의 값이 뒤의 값보다 작으면 안됨
	}

	printf("검색 값>"); scanf("%d", &ky);

	int idx = bin_search(x, nx, ky);
	if (idx == -1) {
		puts("찾는 값이 없습니다");
	}
	else {
		printf("%d은 x[%d]에 있습니다/\n", ky, idx);
	}
	free(x);


	return 0;
}

int bin_search(const int a[], int n, int key) {

}
