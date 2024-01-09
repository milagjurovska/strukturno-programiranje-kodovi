#include <iostream>
#define size 100
using namespace std;

int bara( int *niza, int i, int k, int brojach){
    if (i<0) {
        return brojach;
    }
    if (niza[i]==k) return bara(niza, i - 1, k, brojach + 1);
    else return bara(niza, i - 1, k, brojach);

}

int main () {
    int n, a[size], k, br=0;
    cin>>n;
    for (int i=0; i<n; i++){
       cin>>a[i];
    }
    cin>>k;
    cout<<bara(a, n-1, k, br);
    return 0;
}
