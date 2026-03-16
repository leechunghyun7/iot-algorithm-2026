#include <iostream>
using namespace std;


class constSome {	//상수맴버일 때 초기화
public:
	const int value;
	constSome(int i) : value(i) {}//콜론 초기화 객체를 생성할때 상수맴버는 초기화가 필요
};
	int main()
{
	return 0;
}