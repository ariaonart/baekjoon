#include <iostream>
using namespace std;

int main()
{
	// 시험점수 입력
	int score;
	cin >> score;

	// 조건(if..else if..else)에 따라 출력(cout << )
	if (score >= 90) {
		cout << "A";
	}
	else if (score >= 80) {
		cout << "B";
	}
	else if (score >= 70) {
		cout << "C";
	}
	else if (score >= 60) {
		cout << "D";
	}
	else {
		cout << "F";
	}

	return 0;
}
