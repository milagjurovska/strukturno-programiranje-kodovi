#include <iostream>
using namespace std;

int findLargest(int i, int maks) {
    if (maks < i) {
        maks = i;
    }
    return maks;
}

int isPalindrome(int i, int c) {
    if (i == c) {
        return 1;
    } else {
        return 0;
    }
}

int reverse(int i) {
    int temp = i, c = 0;
    while (temp > 0) {
        c = c * 10 + temp % 10;
        temp /= 10;
    }
    return c;
}

int main() {
    int n, m, maks = 0;
    cin >> n >> m;

    for (int i = n; i <= m; i++) {
        int a = reverse(i);
        if (isPalindrome(i, a)) {
            maks = findLargest(i, maks);
        }
    }
    cout << maks << endl;

    return 0;
}
