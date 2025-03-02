#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 100

int main(){
    int n, indeks=-1;
    cin>>n;
    float niza[SIZE], zbir=0,min=INT_MAX;
    for (int i=0; i<n; i++) {
        cin >> niza[i];
        zbir+=niza[i];
    }
    float arit=(float) zbir/n;
    for (int i=0; i<n; i++) {
        float razlika=abs(arit-niza[i]);
        if (min>razlika){
            min=razlika;
            indeks=i;
        }

    }
    cout<<niza[indeks]<<endl;

    return 0;
}
