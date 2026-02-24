//stack 구현

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "IntStack.h"
int main(void) {
	IntStack st;

	//스택 초기화
	if (Initialize(&st, 10) == -1) {
		puts("스택 초기화 실패!");
		return 1;//exit(1)
	}

	while (1) {//무한루프
		//스택 기능 구현
		int menu = 0, x = 0;
		printf("현재 데이터수%d/%d\n", size(&st), Capacity(&st));
		printf("(1)푸시,(2)팝,(3)피크,(4)출력,(0)종료");
		scanf("%d", &menu);

		if (menu == 0)break;//종료 처리

		switch (menu) {
		case 1://푸시
			printf("데이터 입력>"); scanf("%d", &x);
			if (Push(&st, x) == -1) {
				puts("\a오류:푸시 실패!");
			}
			break;

		case 2://팝
			if (Pop(&st, &x) == -1) {
				puts("\a오류:팝 실패");
			}
			else {
				printf("팝 데이터는 %d\n", x);
			}
			break;

		case 3:
			if (Peek(&st, &x) == -1) {
				puts("\n오류:피크 실패");

			}
			else {
				printf("피크 데이터는 % d\n", x);

			}
			break;

		case 4:
			Print(&st);
			break;
		case 5:
			printf("검색할 수 입력>"); scanf("%d",&x);
			int res = Search(&st, x);
			if (res == -1) {
				puts("검색 실패");

			}
			else { 
				printf("검색결과:stack[%d]=>%d\n", res, st.stk[res]);
				break;
			}
		case 6:
			Clear(&st);
			puts("스택 클리어!");
			break;


		}
	}
	Terminate(&st);
	
	return 0;
}
