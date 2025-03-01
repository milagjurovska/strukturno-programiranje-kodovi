#include <iostream>
#define size 100
using namespace std;

void sortiranje( int *niza1, int n, int *niza2, int m, int *niza3, int i, int j, int k){
    if (i == n) {
        while (j < m) {
            niza3[k++] = niza2[j++];
        }
    } else if (j == m) {
        while (i < n) {
            niza3[k++] = niza1[i++];
        }
    } else if (niza1[i] < niza2[j]) {
        niza3[k] = niza1[i];
        sortiranje(niza1, n, niza2, m, niza3, i + 1, j, k + 1);
    } else if (niza1[i] > niza2[j]) {
        niza3[k] = niza2[j];
        sortiranje(niza1, n, niza2, m, niza3, i, j + 1, k + 1);
    } else {
        niza3[k] = niza1[i];
        sortiranje(niza1, n, niza2, m, niza3, i + 1, j, k + 1);
    }
}


int main () {
    int n,m, a[size], b[size], c[size+size];
    cin>>n;
    for (int i=0; i<n; i++){
       cin>>a[i];
    }
    cin>>m;
    for (int i=0; i<m; i++){
        cin>>b[i];
    }
    sortiranje(a, n, b, m, c, 0, 0, 0);
    for (int i=0; i<(m+n); i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
