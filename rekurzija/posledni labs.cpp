#include <iostream>
#define size 100
using namespace std;

int zbir(int broj, int cifra) {
    if (broj == 0)
        return 0;
    if (broj % 10 < cifra)
        return broj % 10 + zbir(broj / 10, cifra);
    else
        return zbir(broj / 10, cifra);
}

int main() {
    int n, a, maks=0,k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        int zbir1=zbir(a, k);
        if (maks < zbir1){
        maks=zbir1;
        }
    }
    cout<<maks;

    return 0;
}
