//포인터 01

#include <stdio.h>

int main(void) {
	int a = 10;
	int* pa = &a;
	//int *pa;
	//pa=&a;와 동일

	printf("a의 값:%d\n",a);
	printf("a의 주소:%p", &a);
	printf("pa의 값(저장된주소): %p\n", pa);
	printf("pa가 가르치는 값 %d\n", *pa);

	return 0;
}

//pa는 주소저장...