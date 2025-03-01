#include <iostream>
#define size 100
using namespace std;

int main() {
    int n, s[size][size], min, maks, i1, i2;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>s[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        min=maks=s[i][0];
            for (int j = 0; j < n; ++j) {
                if (min>s[i][j]){
                    min=s[i][j];
                    i1=j;
                }
                if (maks<s[i][j]) {
                    maks = s[i][j];
                    i2=j;
                }
            }
            for (int j = 0; j < n; ++j) {
                if (s[i][j]==min)
                    s[i][j]=0;
                else if (s[i][j]==maks)
                    s[i][j]=1;
            }

        }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
