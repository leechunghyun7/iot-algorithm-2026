#include <iostream>

using namespace std;

class Time {
private:
	int m_hour;
	int m_min;
	int m_sec;

public:
	Time() {
		cout << "기본 생성자 호출!!" << endl;
	}
	void setTime(int h, int m, int s) {
		m_hour = h;
		m_min = m;
		m_sec = s;

	}
	void showTime() {
		printf("현재시간은 %d:%d:%d 입니다\n", m_hour, m_min, m_sec);
	}
};
int main()
{
	Time now;
	now.setTime(16, 52, 30);
	now.showTime();

	return 0;
}