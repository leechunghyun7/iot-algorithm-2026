//Intqueue 구현 파일

#include <stdio.h>
#include <stdlib.h>
#include"IntQueue.h"

/*---큐 초기화---*/
// 리턴값 -1(오류),0(성공)
// 파라미터 IntQueue &(주소) , 최대 크기
int Initialize(IntQueue* qu, int max) {
	qu->num = qu->front =qu-> rear = 0;
	if( (qu->que=calloc(max,sizeof(int)))==NULL) {//동적할당이 실패하면 NULL이된다
		qu->max = 0;
		return -1;
	}
	qu->max = max;
	return 0;
}


/*---큐에 데이터 인큐---*/
//파라미터 IntQueue주소, 들어갈 값
//리턴값 -1(오류),0(성공)
int Enque(IntQueue* qu, int x) {
	if (qu ->num >= qu->max) {
		return -1;
	}
	else {
		qu->num++;//데이터가 한건 증가
		qu->que[qu->rear] = x;//큐 마지막에 추가
		qu->rear++;//rear 1 증가

		if (qu->rear == qu->max) {
			qu->rear = 0;
		}
		return 0;
	}
}
/*---큐에 데이터 디큐---*/
/*---큐에 데이터 디큐---*/
//파라미터 IntQueue 주소, 디큐로 가져올 값
//리턴값 -1(오류),0(성공)

int Deque(IntQueue* qu, int* x) {
	if (qu->num <= 0) {
		return -1;
	}
	else {
		qu->num--;
		*x = qu->que[qu->front];
		qu->front++;
	}
		if(qu->front==qu->max){//deque를 계속해서 배열 마지막 까지 ㄷ달}
			qu->front = 0;
	}
		return 0;
}

	int Peek(const IntQueue * qu, int* x) {
		if (qu->num <= 0) {
			return -1;
		}
		*x = qu->que[qu->front];
		return 0;
}

	void Clear(IntQueue* qu) {
		qu->num = qu->front = qu->rear = 0;
}

	/*---큐 최대용량---*/
	//파라미터 확인할 큐
	//리턴값-1(오류),0~max
	int Capacity(const IntQueue* qu) {
		return qu->max;//왜 const가 있을까 클리어랑 end의 경우 const가 있으면 안됨 값이 바뀌기 때문에 
	}

	/*---큐에 저장된 데이터수---*/

	int Size(const IntQueue* qu) {
		return qu->num;
	}

	void Terminate(IntQueue* qu) {
		if (qu->que != NULL) {
			free(qu->que);
		}
		qu->max = qu->num = qu->front = qu->rear = 0;
	}
	int IsEmpty(const IntQueue * qu) {
			return qu->num <= 0;
		}
	/*큐가 가득찼는가?*/
	int IsFull(const IntQueue* qu) {
		return qu->num >= qu->max;
	}
	void Print(const IntQueue* qu) {
		for (int i = 0; i < qu->num; i++) {//마지막으로 갔을때 max값으로 나누면 인덱스 2번의 값을 찍는다
			printf("%d", qu->que[(qu->front + i) % qu->max]);
		}
	}
	/*---큐 검색---*/
	int Search(const IntQueue* qu,int x) {
		for (int i = 0; i < qu->num; i++) {
			int idx= (qu->front + i) % qu -> max;
			if (qu->que[idx] == x) {
				return idx;
			}
		}
		return -1;
	}