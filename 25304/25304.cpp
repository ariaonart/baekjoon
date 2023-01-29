#include <iostream>
using namespace std;

int main()
{
	// 전체금액과 수량을 입력받기
	int x, n;
	cin >> x >> n;

	// 수량만큼 반복해서 
		//금액과 수량을 입력받기
		// 2) 전체금액에서 다빼고 0인지 확인
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		x = x - (a * b);
	   
	}
	if (x == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}