#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 4의 배수이면서, 
    // (n % 4)
    if (n % 4 != 0) {
        cout << 0;
        return 0;
    }

    if (n % 400 == 0) {
        cout << 1;
        return 0;
    }

    if (n % 100 == 0) {
        cout << 0;
        return 0;
    }

    cout << 1;

    return 0;
}