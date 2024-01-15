#include <iostream>
#define size 100
using namespace std;

int main() {
    int n,a[size][size],zbir1=0;
    cin>>n;
    bool proverka=true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        int kolona = 0;
        for (int j = 0; j < n; ++j) {
            kolona += a[i][j];
        }
        if (i == 0) {
            zbir1 = kolona;
        } else if (kolona != zbir1) {
            proverka = false;
            break;
        }
    }
    if(proverka){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i==j || i+j==n-1)
                    a[i][j]=zbir1;
            }
        }
        cout<<"True"<<endl;
        for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else cout<<"False"<<endl;
    
    return 0;
}
