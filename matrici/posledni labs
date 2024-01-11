#include <iostream>
#include "cmath"
#define size 100
using namespace std;

bool check(int broj){
    int koren= round(sqrt(broj));
    return koren*koren==broj && broj>0;
}

int main() {
    int n, a[size][size],zbir;
    bool proverka=true;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
           zbir=a[i][i]+a[i][n-1-i]; //00+02 (1+8)
           if (!check(zbir)) {
               proverka = false;
               break;
           }
    }
    if (proverka){
        cout<<"tochno e";
    }
    else
        cout<<"ne e tochno";

    return 0;
}
