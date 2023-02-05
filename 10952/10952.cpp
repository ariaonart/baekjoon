#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	while (true) {
		int a, b;
		cin >> a >> b;

		if (a == 0 && b == 0) {
			break;
		}
		cout << a + b;
	}

	return 0;
}

