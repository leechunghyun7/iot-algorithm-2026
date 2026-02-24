// IntStack.c 스택 자료구조 함수 구현 파일
#include <stdio.h>
#include<stdlib.h>
#include"IntStack.h"
/*---스택 초기화---*/
int Initialize(IntStack* st, int max) {
	st->ptr = 0;//스택을 비우고 시작
	if((st->stk=calloc(max,sizeof(int)))==NULL){//동적배열 생성실패
		st->max = 0;
		return -1;//오류리턴
	}
	st->max = max;
	return 0; //오류없이 초기화
}

/*--- 스택에 데이터 push(푸시)---*/
int Push(IntStack* st, int x) {
	if (st->ptr >= st->max) {
		return-1;//데이터 더 추가불가
	}

	st->stk[st->ptr] = x;//이전값 다음에 스택에 데이터 추가
	st->ptr++;//ptr을 1증가

	return 0;//오류없이 실행 종료
}

int Pop(IntStack* st, int* x) {
	if (st->ptr <= 0) {
		return -1;//오류!
	}
	st->ptr--;//ptr 위치값을 1감소한뒤
	*x = st->stk[st->ptr];

	return 0;
}
	/*---스택에서 마ㅈ막 데이터peek(피크)---*/
	int Peek(const IntStack * st, int* x) {
		if (st->ptr <= 0) {
			return -1; //오류
		}
		*x = st->stk[st ->ptr - 1];
		return 0;
	}
	void Clear(IntStack* st) {
		st->ptr = 0;//다음에 데이터 푸시할 위치를 0으로 바꿈
		//포이터 배열사에 데이터는 남아있음

	}
	/*스택 최대 용량*/
	int Capacity(const IntStack* st) {
		return st->max;
	}
	/*---스택 데이터 개수---*/
	int size(const IntStack* st) {
		return st->ptr;
	}
	/*---스택 빈 여부확인---*/
	int IsEmpty(const IntStack* st) {
		return st->ptr <= 0;//1true,0false
	}

	/*---스택 만실 여부확인---*/
	int IsFull(const IntStack* st) {
		return st->ptr >= st->max;
	}
	/*---스택 검색---*/
	int Search(const IntStack* st,int x) {
		for (int i = st->ptr - 1; i >= 0; i--) {
			if (st->stk[i] == x) {
				return i;
			}
		}
		return-1;//0인덱스에도 데이터 있으니까
	}
	/*---스택 모든 데이터 출력---*/
	void Print(const IntStack* st) {
		for (int i = 0; i < st->ptr; i++) {
			printf("%d", st->stk[i]);
		}
		printf("\n");
	}
	/*---스택 종료---*/
		void Terminate(IntStack * st) {
			if (st->stk != NULL) {
				free(st->stk);//메모리 해제
			}
			st->max = st->ptr = 0;
		}

		//스택용 함수 정의 완료
