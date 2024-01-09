#include <iostream>
#define size 100
using namespace std;

int main() {
    int n, s[size][size], min, index;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>s[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        min=s[i][0];
        if ((i+1)%2!=0){
            for (int j = 0; j < n; ++j) {
                if (min>s[i][j]){
                    min=s[i][j];
                }
            }
            i++;
            for (int j = 0; j < n; ++j) {
                s[i][j]=s[i][j]+min;
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
