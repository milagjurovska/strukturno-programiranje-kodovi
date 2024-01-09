#include <iostream>
#define size 100
using namespace std;

int main() {
    int n, s[size][size], zbir;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>s[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (s[i][j]<0){
                 zbir=0;
                if (j-1>=0)
                    zbir+=s[i][j-1];
                if (j+1<n)
                    zbir+=s[i][j+1];
                if (i-1>=0)
                    zbir+=s[i-1][j];
                if (i+1<n)
                    zbir+=s[i+1][j];
                s[i][j]=zbir;
            }
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
