

#include <stdio.h>

int main(void) {
	int prime[500];//이전 계산한 소수 저장하는 배열
	int prime_cnt = 0;
	int ptr = 0;//소수의 갯수
	unsigned long counter = 0;
	prime[prime_cnt++] = 2;

	for (int n = 3; n <= 1000;n += 2) {
		int i;
		for (i = 1; i< prime_cnt; i++) {
			counter++;
			if (n % prime[i] == 0) {//소수 아님
				break;
			}
		}
		if (prime_cnt == i) {
			prime[prime_cnt++] = n;
		}
	}
	for (int i = 0; i < prime_cnt; i++) {
		printf("% d\n", prime[i]);
	}
	printf("1~1000까지 소수개수%u\n", prime_cnt);
	printf("나눗셈 실행 횟수:%lu\n", counter);

}