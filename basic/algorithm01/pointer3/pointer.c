// pointer 03

#include <stdio.h>

int main(void) {
	int ary[] = { 10,30,50,70,90 };
	int* pa = ary;//베열변수의 요수 []를 빼면 배열 변수의 시작 주소를 뜻함
	int count = sizeof(ary) / sizeof(ary[0]);
	for (int i = 0; i < count; i++) {
		printf("ary[%d]=%d\n", i, *(pa + i));//ary[i]

	}


	return 0;
}

//배열 이름 = 첫번째 요소 주소
//pa+1은 1바이트 아님 자료형 크기만큼 1이동
//ary[i] ==*(ary+i) == *(pa+1)