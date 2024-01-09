#include <iostream>
#define size 100
using namespace std;

int zbir (int niza[], int n){
    if (n==0) return niza[n];
    else return niza[n]+zbir (niza, n-1);
}

int main(){
    int n, a[size];
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<zbir (a, n-1);
    return 0;
}
