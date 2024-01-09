#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 100


int main (){
    int n,niza[SIZE],razlika;
    cin>>n;
    for (int i=0; i<n; i++) cin>>niza[i];
    for (int i=0; i<n;i++){
        razlika=0;
        for (int j=0; j<n; j++) {
            if (niza[i] == niza[j] && i!=j) {
                razlika = abs(i - j);
                niza[i+razlika]=niza[j]+razlika;
            }
        }
    }
    for (int i=0; i<n; i++) cout<<niza[i]<<" ";
    return 0;
}
